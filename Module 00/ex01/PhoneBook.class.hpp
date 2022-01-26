/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:46:12 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/26 18:54:06 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#prama one

# include <Contact.class.hpp>

Class PhoneBook
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