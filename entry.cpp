#include "entry.h"

Entry::Entry()
{
    std::cout << "Cool." << std::endl;
}

bool Entry::set_ID(unsigned long ID)
{
    Entry::ID = ID;
    return (Entry::ID = ID) ? true : false;
}

