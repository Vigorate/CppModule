/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:47:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/28 17:44:00 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma one

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();

		std::string	getinfo(int idx);
		void		setinfo(std::string, int);

	private:
		std::string	info[5];
};