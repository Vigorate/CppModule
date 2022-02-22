/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:03:47 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/22 16:20:30 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:

		Intern(void);
		Intern(Intern const & src);
		~Intern(void);

		Intern&		operator=(Intern const & src);

		Form		*makeForm(std::string const &, std::string const &) const;
};

typedef struct s_form_mask
{
	std::string		type;
	Form			*form;
}				t_fm;