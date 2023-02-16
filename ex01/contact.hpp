/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 00:51:08 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/17 00:51:10 by psuanpro         ###   ########.fr       */
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
		std::string _darksrecret;
	public:
		Contact(void);
		~Contact(void);
		void	cleanUp(void);
		void	setContact(std::string fn, std::string ln, std::string nick, std::string pn , std::string dk,int num);
		void	getAllContact(int index, int mode) const;

};

#endif
