#ifndef INVOICEH
#define INVOICEH

#include "constants.h"
#include "entry.h"


#include <time.h>

class Invoice
{
public:
    std::string         ID;
    std::string         notes;
    bool                is_bill;
    enum currency_list  currency;
    std::string         job_ID;
    unsigned long       merchant;
    struct tm           date_posted;
    struct tm           date_due;
    struct tm           date_paid;
    /*unsigned long       entries[] = {};*/
    unsigned long entries [];

    /* Constructor */
    Invoice();
};

#endif // INVOICEH
