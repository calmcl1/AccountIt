#ifndef INVOICEH
#define INVOICEH

#include "entry.h"
#include "constants.h"

#include <time.h>

class Invoice
{
public:
    string              ID;
    string              notes;
    bool                is_bill;
    enum currency_list  currency;
    string              job_ID;
    unsigned long       merchant;
    struct tm           date_posted;
    struct tm           date_due;
    struct tm           date_paid;
    unsigned long       entries[] = {};

};

#endif // INVOICEH
