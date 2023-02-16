/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:53:01 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/16 16:13:17 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iomanip>

Contact::Contact(void){
	Contact::cleanUp();
}

Contact::~Contact(void){
	Contact::cleanUp();
}

void	Contact::cleanUp(void){
	this->_fname.clear();
	this->_lname.clear();
	this->_nickname.clear();
	this->_phonenumber.clear();
}

void	Contact::setContact(std::string fn, std::string ln, std::string nick, std::string pn , std::string dk, int num){
	this->_fname.assign(fn);
	this->_lname.assign(ln);
	this->_nickname.assign(nick);
	this->_phonenumber.assign(pn);
	this->_darksrecret.assign(dk);
	this->_number = num;
}

void	Contact::getAllContact(int index, int mode) const {
	if (mode == 0){
		std::cout << "| " << index + 1 << " | " ;
		std::cout << this->_fname.substr(0, 10) << " | ";
		std::cout << this->_lname.substr(0, 10) << " | ";
		std::cout << this->_nickname.substr(0,10) << " | ";
		std::cout << this->_phonenumber.substr(0, 10) << " | ";
		std::cout << this->_darksrecret.substr(0, 10) << " |" << std::endl;
	} else if (mode == 1) {
		std::cout << "| " << index + 1 << " | " ;
		std::cout << this->_fname.substr(0, 10) << " | ";
		std::cout << this->_lname.substr(0, 10) << " | ";
		std::cout << this->_nickname.substr(0,10) << " | " << std::endl;
	}
}

