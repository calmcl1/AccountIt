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

    Entry();

private:
    bool            set_ID(unsigned long new_ID);
    unsigned long   get_ID();

    bool            set_date(struct tm date);
    struct tm       get_date();

    bool            set_description(std::string description);
    struct tm       get_description();

    bool            set_account(unsigned long account);
    unsigned long   get_account();

    bool            set_transaction(unsigned long transaction);
    unsigned long   get_transaction();

    bool            set_unit_cost(double unit_cost);
    double          get_unit_cost();

    bool            set_quantity(double quantity);
    double          get_quantity();

    bool            set_discount_amount(double discount_amount);
    double          get_discount_amount();

    bool            set_gross_cost(double gross_cost);
    double          get_gross_cost();

    bool            set_tax_rate(float tax_rate);
    float           get_tax_rate();

    bool            set_tax_cost(double tax_cost);
    double          get_tax_cost();

    bool            set_net_cost(double net_cost);
    double          get_net_cost();
};

#endif // ENTRYH
