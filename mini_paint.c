
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>

int	len(const char *str)
{
	int	i = 0;

	while (str[i])
		++i;
	return (i);
}

int	print_clean_error(int type, FILE *f, char *shape)
{
	char	*s1 = "Error: argument\n";
	char	*s2 = "Error: Operation file corrupted\n";

	if (!type)
		write(1, s1, len(s1));
	if (type == 1)
	{
		write(1, s2, len(s2));
		if (f)
			fclose(f);
		free(shape);
	}
	return (1);
}

typedef struct	s_backgroud
{
	int			width;
	int			height;
	char		c;
}				bg_t;

int		fill_bg(bg_t *bg, FILE *f)
{
	fscanf(f, "%d %d %c\n", &bg->width, &bg->height, &bg->c);
	if (bg->width <= 0 || bg->width > 300 || bg->height <= 0 || bg->height > 300)
		return (1);
	return (0);
}

char	*fill_bg_shape(bg_t bg)
{
	char	*shape;

	if (!(shape = malloc(sizeof(char) * (bg.height * bg.width))))
		return (NULL);
	for (int i = 0; i < bg.height * bg.width; ++i)
		shape[i] = bg.c;
	return (shape);
}

void	draw_shape(bg_t bg, char *shape)
{
	for (int i = 0; i < bg.height; ++i)
	{
		write(1, shape + i * bg.width, bg.width);
		write(1, "\n", 1);
	}
}

typedef struct		s_rectangle
{
	char	t;
	float	x;
	float	y;
	double	r;
	char	c;
}					s_rect;

int		check_r(s_rect r)
{
	if ((r.t == 'C' || r.t == 'c') && (r.r > 0.00000000))
		return (0);
	return (1);
}

int	check_draw_pos(float x, float y, s_rect r)
{
	if (sqrt((x - r.x) * (x - r.x) + (y - r.y) * (y - r.y)) > r.r)
		return (0);
	if (r.r - sqrt((x - r.x) * (x - r.x) + (y - r.y) * (y - r.y)) < 1.00000000)
		return (2);
	return (1);


	// if ((r.w + r.x < x || x < r.x) || (r.y + r.h < y || y < r.y))
	// 	return (0);
	// if (((x - r.x < 1.00000000) || ((r.x + r.w) - x < 1.00000000)) ||
	// (y - r.y < 1.00000000 || ((r.y + r.h) - y < 1.00000000)))
	// 	return (2);
	// return (1);
	// if (((x < r.x || (r.x + r.w < x))
	// 	|| (y < r.y)) || (r.y + r.h < y))
	// 	return (0); // Is the point inside the rectangle
	// if (((x - r.x < 1.00000000) || ((r.x + r.w) - x < 1.00000000)) ||
	// ((y - r.y < 1.00000000 || ((r.y + r.h) - y < 1.00000000)))) // Is the point an outline of the rectangle
	// 	return (2); // The point is an outline of the rectangle, draw it as R and r
	// return (1); // The point in inside de rectangle, draw it as R
}

void	draw_rectangle(char *shape, bg_t bg, s_rect r)
{
	int	value = 0;

	for (int i = 0; i < bg.height; ++i)
	{
		for (int j = 0; j < bg.width; ++j)
		{
			value = check_draw_pos(j, i, r);
			if (((r.t == 'c' && value == 2) || (r.t == 'C' && value)))
				shape[(i * bg.width) + j] = r.c;
		}
	}
}

int		write_shape(FILE *f, bg_t bg, char *shape)
{
	s_rect	r = {r.t = 0, r.x = 0, r.y = 0, r.r = 0, r.c = 0};
	int		scanned = 0;

	while ((scanned = fscanf(f, "%c %f %f %lf %c\n", &r.t, &r.x, &r.y, &r.r, &r.c)) == 5)
	{
//		printf("got rectangle : t : %c | x : %f | y : %f | w : %f | h : %f | c : %c\n", r.t, r.x, r.y, r.w, r.h, r.c);
		if (check_r(r))
			return (1);
		draw_rectangle(shape, bg, r);
	}
//	printf("scanned : %d\n", scanned);
//	if (scanned == -1)
//		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	bg_t	bg;
	FILE	*f;
	char	*shape = NULL;

	if (ac == 1 || ac > 2)
		return (print_clean_error(0, NULL, NULL));
	bg.height = 0;
	bg.width = 0;
	bg.c = 0;
	if (!(f = fopen(av[1], "r")))
		return (print_clean_error(1, NULL, NULL));
	if (fill_bg(&bg, f))
		return (print_clean_error(1, f, NULL));
//	printf("WIDTH : %d | HEIGHT : %d | CHAR : %c\n", bg.width, bg.height, bg.c);
	if (!(shape = fill_bg_shape(bg)))
		return (print_clean_error(1, f, shape));
	if (write_shape(f, bg, shape))
		return (print_clean_error(1, f, shape));
	draw_shape(bg, shape);
	fclose(f);
	free(shape);
	return (0);
}