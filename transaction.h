#ifndef TRANSACTIONH
#define TRANSACTIONH

#include "constants.h"

#include <time.h>

class Transaction
{
public:
    unsigned long   ID;
    unsigned long   merchant;
    unsigned long   receipt;
    bool            is_credit;
    double          value;
    struct tm       date;

};

#endif // TRANSACTIONH
