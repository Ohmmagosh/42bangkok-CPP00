/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:07:00 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/13 22:48:33 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>

class	PhoneBook {
	private:

	public:
		PhoneBook() {
			std::cout << "hello phonebook" << std::endl;
		}
		~PhoneBook() {
			std::cout << "goodbye phonebook" << std::endl;
		}
};

#endif
