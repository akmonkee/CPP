/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msisto <msisto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:37:29 by msisto            #+#    #+#             */
/*   Updated: 2025/09/01 12:38:34 by msisto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit)
{
	this->amount=initial_deposit;
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
	std::cout<<"index:"<<this->_accountIndex<<";"<<"amount:"<<this->_amount<<";"<<"deposits"<<this->_nbDeposits<<";"<<"withdrawals:"<<_nbWithdrawals<<std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount = this->_amount + deposit;
	this->_nbDeposits++;
}

bool	makeWithdrawal( int withdrawal );
{
	if (this->_amount < withdrawal)
		return false;
	else
		this->_amount = this->_amount - withdrawal;
	this->_nbWithdrawals++;
	return true;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	std::cout<<"index:"<<this->_accountIndex<<";"<<"amount:"<<this->_amount<<";"<<"deposits"<<this->_nbDeposits<<";"<<"withdrawals:"<<_nbWithdrawals<<std::endl;
}
