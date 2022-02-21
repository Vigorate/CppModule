/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:06:02 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/21 17:04:21 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

};
