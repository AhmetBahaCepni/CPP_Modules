#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void )
{
    return (_nbAccounts);
}

int Account::getTotalAmount( void )
{
    return (_totalAmount);
}

int Account::getNbDeposits( void )
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:"<< _nbAccounts;
    std::cout << ";total:" << _totalAmount;
    std::cout << ";deposits:" << _totalNbDeposits;
    std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;

    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount - deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	std::cout << ";withdrawal:";
    if(this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

	std::cout << withdrawal;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (true);
}

int		Account::checkAmount( void ) const
{
    return (_amount);
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void )
{
    time_t now = time(0);
    struct tm *ltm = localtime(&now);

    std::cout << "[" << ltm->tm_year << ltm->tm_mon << ltm->tm_mday << "_"
    << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "] ";
}
