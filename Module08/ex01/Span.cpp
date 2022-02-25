/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ambelkac <ambelkac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:27:22 by ambelkac          #+#    #+#             */
/*   Updated: 2022/02/25 19:41:56 by ambelkac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Span::Span(void) {
	std::cout << "Span created" << std::endl;
}

Span::Span(Span const & src) {
	std::cout << "Span copied." << std::endl;
}

Span::~Span(void) {
	std::cout << "Span destroyed." << std::endl;
}

Span&  Span::operator=(Span const & src) {
	return (*this);
}

std::ostream    &operator<<(std::ostream &ostream, const Span &src)
{
	ostream << "Span";
	return (ostream);
}