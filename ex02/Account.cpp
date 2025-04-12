/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:07:13 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 13:39:35 by ansebast         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return ( _nbAccounts );
}

int	Account::getTotalAmount( void )
{
	return ( _totalAmount );
}

int	Account::getNbDeposits( void )
{
	return ( _totalNbDeposits );
}

int	Account::getNbWithdrawals( void )
{
	return ( _totalNbWithdrawals );
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << getNbAccounts()
		  << ";total:" << getTotalAmount()
		  << ";deposits:" << getNbDeposits()
		  << ";withdrawals:" << getNbWithdrawals()
		  << std::endl;
}


Account::Account( int initial_deposit )
{
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	std::cout << "index:" << this->_accountIndex << ";"
		  << "amount:" << initial_deposit << ";"
		  << "created"
		  << std::endl;
}

Account::~Account( void )
{

}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";"
		  << "p_amount:" << this->_amount - deposit << ";"
		  << "deposit:" << deposit << ";"
		  << "amount:" << this->_amount << ";"
		  << "nb_deposits:" << this->_nbDeposits << ";"
		  << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void)withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{

}

void	Account::_displayTimestamp( void )
{

}
