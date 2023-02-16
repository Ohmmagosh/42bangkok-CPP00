/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:51:24 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/17 00:51:25 by psuanpro         ###   ########.fr       */
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
		void	getContact(int index, int mode);
		void	getAllContact(void);
		void	showHeader(int mode);
		void	searchContact(void);
		void	showUsage(void);
		bool	allStrIsDigit(std::string str);
};

#endif
