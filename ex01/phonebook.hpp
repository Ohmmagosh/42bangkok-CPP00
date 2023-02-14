/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:07:00 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/14 21:52:32 by psuanpro         ###   ########.fr       */
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
		Contact		*contacts;
	public:
		PhoneBook(void);
		~PhoneBook();
		void	addContract(std::string fn, std::string ln, std::string nick, std::string pn);
};

#endif
