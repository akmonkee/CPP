/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:37:29 by msisto            #+#    #+#             */
/*   Updated: 2025/09/02 11:30:10 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;

	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";created"<<std::endl;
}

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<" accounts:"<<getNbAccounts()<<";total:"<<getTotalAmount()<<";deposits:"<<getNbDeposits()<<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout<<" index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";deposit:"<<deposit;
	this->_amount = this->_amount + deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout<<";amount:"<<this->_amount<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout<<" index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:refused"<<std::endl;
		return false;
	}
	std::cout<<" index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout<<withdrawal<<";amount:"<<this->_amount<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
	return true;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t now = std::time(0);
	std::tm* ltm = std::localtime(&now);
	char buffer[20];

	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", ltm);
	std::cout << buffer;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout<<" index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";closed"<<std::endl;
}
