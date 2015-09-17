#ifndef RECEIPTH
#define RECEIPTH

#include "constants.h"

class Receipt
{
public:
    unsigned long   ID;
    char            image[] = {};
    double          value;
};
#endif // RECEIPTH
