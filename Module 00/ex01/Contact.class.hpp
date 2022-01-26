/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:47:29 by ambelkac          #+#    #+#             */
/*   Updated: 2022/01/26 18:51:50 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#prama one

Class Contact
{
	public:
		Contact();
		~Contact();

		std::string	*getinfo(void) const;
		void		setinfo(std::string *)
	private:
		std::string	info[5];
}