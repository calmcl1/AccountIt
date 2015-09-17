#ifndef ACCOUNTH
#define ACCOUNTH

#include "constants.h"
#include "transaction.h"

class Account
{
public:
    unsigned long       ID;
    std::string         name;
    enum currency_list  currency;
    unsigned long       transactions[] = {};
    double              opening_balance;
};

#endif // ACCOUNTH
