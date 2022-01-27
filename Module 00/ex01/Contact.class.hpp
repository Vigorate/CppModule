/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:47:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/27 17:35:54 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma one

#include <string>

class Contact
{
	public:
		Contact();
		~Contact();

		string	*getinfo(void) const;
		void		setinfo(string *);

	private:
		string	info[5];
}