/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:46:12 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/01 12:26:29 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"

class PhoneBook
{
	public:	
		PhoneBook();
		~PhoneBook();

		Contact			*getContact(int idx);

		std::string		line;

		void			add_instruction(int idx);
		void			search_instruction(int idx);

	private:
		Contact contact[8];
};