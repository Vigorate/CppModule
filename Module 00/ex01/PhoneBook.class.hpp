/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:46:12 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/28 16:49:42 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma one

# include "Contact.class.hpp"

class PhoneBook
{
	public:	
		PhoneBook();
		~PhoneBook();

		void	setContact(class Contact, int idx);
		Contact	getContact(int idx) const;

	private:
		Contact contact[8];
};