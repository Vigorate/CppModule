/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:47:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/01 15:08:29 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();

		std::string	getinfo(int);
		void		setinfo(std::string, int);

	private:
		std::string	info[5];
};