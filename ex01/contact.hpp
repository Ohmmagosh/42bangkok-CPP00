/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:52:58 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/14 23:21:40 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class	Contact {
	private:
		int			_number;
		std::string	_fname;
		std::string	_lname;
		std::string	_nickname;
		std::string	_phonenumber;
	public:
		Contact(void);
		~Contact(void);
		void	CleanUp(void);
		void	SetContact(std::string fn, std::string ln, std::string nick, std::string pn ,int num);
		void	GetContact(void) const;
};

#endif
