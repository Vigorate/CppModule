/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:23:19 by amine             #+#    #+#             */
/*   Updated: 2022/02/09 15:19:24 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(void)
{
	Karen	instance;

	instance.complain("DEBUG");
	instance.complain("INFO");
	instance.complain("WARNING");
	instance.complain("ERROR");
	instance.complain("NOTHING");
}