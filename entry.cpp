#include "entry.h"

Entry::Entry()
{
    printf("cheese");
}

bool Entry::set_ID(unsigned long ID)
{
    Entry::ID = ID;
    return Entry::ID = ID ? true : false;
}

