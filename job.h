#ifndef JOBH
#define JOBH

#include "constants.h"

class Job
{
public:
    unsigned long ID;
    unsigned long client;
    unsigned long invoices[];
};

#endif // JOBH
