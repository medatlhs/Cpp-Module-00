#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void) {
    std::time_t passedSeconds = std::time(0);
    std::tm     *localTime = std::localtime(&passedSeconds);

    std::cout << "[" << 1900 + localTime->tm_year;
    std::cout << localTime->tm_mon + 1;
    std::cout << localTime->tm_mday << "_";
    std::cout << localTime->tm_hour;
    std::cout << localTime->tm_min;
    std::cout << localTime->tm_sec << "] ";
}

Account::Account(int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount += initial_deposit;
    _nbAccounts += 1;
    _totalAmount += initial_deposit;
    _totalNbDeposits += 1;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created;" << std::endl;
}

Account::~Account() {
    std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";closes" << std::endl;
}

void    Account::displayAccountsInfos() {
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << 
        _totalAmount << ";deposit:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals
            << std::endl;
}

void Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << "p_amount:" << checkAmount() << "deposit" << deposit << ";amount:"
        << deposit+checkAmount() << "nb_deposits:" << _nbDeposits << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal) {
    std::cout << "index:" << _accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
    if(withdrawal > _amount)
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

int Account::checkAmount() const {
    return(_amount);
}

void Account::displayStatus() const {
    std::cout << "medcodes";
}

int Account::getNbAccounts() {
    return (_nbAccounts);
}

int Account::getTotalAmount() {
    return (_totalAmount);
}

int Account::getNbWithdrawals(void) {
    return(_totalNbWithdrawals);
}
int Account::getNbDeposits() {
    return (_totalNbDeposits);
}