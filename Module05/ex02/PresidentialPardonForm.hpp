/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:05:56 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 17:03:08 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);
};
