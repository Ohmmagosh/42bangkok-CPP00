/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:20:51 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/17 00:35:24 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit){
	this->_accountIndex = Account::_nbAccounts++;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account(){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "closed" << std::endl;
}


void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";" << "total:" << Account::_totalAmount << ";" << "deposits:" << Account::_totalNbDeposits << ";" << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ){
	std::cout << "[19920104_091532] ";
}

void	Account::makeDeposit( int deposit ){
	Account::_totalNbDeposits += 1;
	this->_nbDeposits += 1;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount - deposit << ";" << "deposits:" << deposit << ";" << "amount:" << this->_amount << ";"<< "nb_deposites:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	if (this->_amount - withdrawal < 0){
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "withdrawal:" << "refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals += 1;
	this->_nbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:" << this->_amount << ";" << "withdrawal:" << this->_nbWithdrawals << ";" << "amount:" << this->_amount << ";" << "nb_withdeawals:" << this->_nbWithdrawals <<std::endl;
	return true;
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "deposites:" << this->_nbDeposits << ";" << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

