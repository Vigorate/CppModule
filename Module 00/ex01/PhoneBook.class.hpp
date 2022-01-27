/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:46:12 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/27 17:28:43 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma one

# include <Contact.class.hpp>

class PhoneBook
{
	public:	
		PhoneBook();
		~PhoneBook();

		void	setContact(Class Contact)
		Contact	getContact(void) const;
		
	private:
		int	idx;
		Contact[8];
	
};