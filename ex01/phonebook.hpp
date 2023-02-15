/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:07:00 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/16 03:03:02 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"
#include "color.hpp"
#include <iostream>
#include <string>

class	PhoneBook {
	private:
		static int	_a;
		int			size;
		Contact		contacts[8];
	public:
		PhoneBook(void);
		~PhoneBook();
		void	addContact(void);
		void	getContact(int index);
		void	getAllContact(std::string input);
		void	showHeader();
};

#endif
