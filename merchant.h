#ifndef MERCHANTH
#define MERCHANTH

#include "constants.h"

class Merchant
{
public:
    unsigned long   ID;
    std::string     name;
    bool            is_client;
};

#endif // MERCHANTH
