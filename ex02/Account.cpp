/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:07:13 by ansebast          #+#    #+#             */
/*   Updated: 2025/04/12 14:38:07 by ansebast         ###   ########.fr       */
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
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	std::cout << "index:" << this->_accountIndex << ";"
		  << "amount:" << initial_deposit << ";"
		  << "created"
		  << std::endl;
}

Account::~Account( void )
{
	std::cout << "index:" << this->_accountIndex << ";"
		  << "amount:" << this->_amount << ";"
		  << "closed"
		  << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
	
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";"
		  << "p_amount:" << this->_amount - deposit << ";"
		  << "deposit:" << deposit << ";"
		  << "amount:" << this->_amount << ";"
		  << "nb_deposits:" << this->_nbDeposits
		  << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (checkAmount() - withdrawal < 0)
	{
		std::cout << "index:" << this->_accountIndex << ";"
			<< "p_amount:" << this->_amount << ";"
			<< "withdrawal:refused"
			<< std::endl;
		return ( false );
	}
	
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout << "index:" << this->_accountIndex << ";"
		  << "p_amount:" << this->_amount + withdrawal << ";"
		  << "withdrawal:" << withdrawal << ";"
		  << "amount:" << this->_amount << ";"
		  << "nb_withdrawals:" << this->_nbWithdrawals
		  << std::endl;
	return ( true );
}

int	Account::checkAmount( void ) const
{
	return ( this->_amount );
}

void	Account::displayStatus( void ) const
{
	std::cout << "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

void	Account::_displayTimestamp( void )
{

}
