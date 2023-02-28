/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maboulho <maboulho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:20:54 by maboulho          #+#    #+#             */
/*   Updated: 2023/02/18 20:34:11 by maboulho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	_nbAccounts = 0;
int	_totalAmount = 0;
int	_totalNbDeposits = 0;
int	_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    
}
int	Account::getTotalAmount( void )
{
    
}
int	Account::getNbDeposits( void )
{
    
}
int	Account::getNbWithdrawals( void )
{
    
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos( void )
{
    
}

//[19920104_091532]index:0 ;amount:42;created
Account::Account(int initial_deposit)
{
    
}

//[19920104_091532] index:0;amount:47;closed
Account::~Account(void)
{
    
}

//[19920104_091532]
void	Account::_displayTimestamp( void )
{
    
}
// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const
{
    
}

// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit( int deposit )
{
    
}

//[19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal( int withdrawal )
{
    
}
