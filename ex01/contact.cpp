/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:53:01 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/14 23:27:48 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <cstring>

Contact::Contact(void){
	//Contact::CleanUp();
	std::cout << "hello contract" << std::endl;
}

Contact::~Contact(void){
	Contact::CleanUp();
	std::cout << "bye contract" << std::endl;
}

void	Contact::CleanUp(void){
	this->_fname.clear();
	this->_lname.clear();
	this->_nickname.clear();
	this->_phonenumber.clear();
}

void	Contact::SetContact(std::string fn, std::string ln, std::string nick, std::string pn , int num){
	this->_fname.assign(fn);
	this->_lname.assign(ln);
	this->_nickname.assign(nick);
	this->_phonenumber.assign(pn);
	this->_number = num;
	this->GetContact();
}

void	Contact::GetContact(void) const {
	std::cout << "index : " << this->_number << std::endl;
	std::cout << "fistname : " << this->_fname << std::endl;
	std::cout << "lastname" << this->_lname << std::endl;
	std::cout << "nickname" << this->_nickname << std::endl;
	std::cout << "phone number" << this->_phonenumber << std::endl;
}
