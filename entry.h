#ifndef ENTRYH
#define ENTRYH

#include "constants.h"

#include <time.h>
#include <string.h>

class Entry
{
public:
    unsigned long   ID;
    struct tm       date;
    std::string     description;
    unsigned long   account;
    unsigned long   transaction;
    double          unit_cost;
    double          quantity;
    double          discount_amount;
    double          gross_cost;
    float           tax_rate;
    double          tax_cost;
    double          net_cost;

};

#endif // ENTRYH
