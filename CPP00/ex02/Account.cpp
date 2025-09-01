/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:37:29 by msisto            #+#    #+#             */
/*   Updated: 2025/09/01 15:01:14 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

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
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";created"<<std::endl;
}

static int	Account::getNbAccounts( void )
{
	this->_nbAccounts;
}

static int	Account::getTotalAmount( void )
{
	this->_totalAmount;
}

static int	Account::getNbDeposits( void )
{
	this->_totalNbDeposits;
}

static int	Account::getNbWithdrawals( void )
{
	this->_totalNbWithdrawals;
}

static void	Account::displayAccountsInfos( void )
{

}

void	Account::makeDeposit( int deposit )
{
[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount;
	this->_amount = this->_amount + deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout<<";amount:"<<this->_amount<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
}

bool	makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (this->_amount < withdrawal)
	{
		std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:refused"<<std::endl;
		return false;
	}
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:";
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
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";deposits"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

void Account::_displayTimestamp(void)
{
	std::time_t now = std::time(nullptr);
	std::tm* ltm = std::localtime(&now);
	char buffer[20];

	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", ltm);
	std::cout << buffer;
}


