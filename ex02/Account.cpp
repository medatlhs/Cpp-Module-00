#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::cout << "[1234567898] "; 
}

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _amount += initial_deposit;
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    _totalNbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created;" << std::endl;
}

Account::~Account()
{
    std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closes" << std::endl;
}

// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0

void    Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << 
        _totalAmount << ";deposit:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
            << std::endl;
}

/*
[19920104_091532] index:0;p_amount:47;withdrawal:refused
[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
*/

bool Account::makeWithdrawal(int withdrawal)
{
    std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
    if(withdrawal > _amount);
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";amount:" << checkAmount() - withdrawal << ";nb_withdrawals:"
        << _totalNbWithdrawals << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    return true;
}

void Account::displayStatus() const
{
    std::cout << "medcodes";
}

int Account::checkAmount() const
{
    return(_amount);
}

// [19920104_091532] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1

void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << "p_amount:" << checkAmount() << "deposit" << deposit << ";amount:"
        << deposit+checkAmount() << "nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
}
int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}
int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}
int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}



void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << "p_amount:" << checkAmount() << "deposit" << deposit << ";amount:"
        << deposit+checkAmount() << "nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
}
int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}
int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}
int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

