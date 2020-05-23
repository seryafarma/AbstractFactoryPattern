//-----------------------------------------------------------------------------
// File:   Bed.cxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#include <abstract_factory_pattern/Bed.hxx>
#include <plog/Log.h>

//-----------------------------------------------------------------------------
Bed::Bed(std::string name, unsigned int price)
:
   Furniture(name, price)
{
    PLOGD;
}

//-----------------------------------------------------------------------------
Bed::~Bed()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Bed::showProduct()
{
    PLOGD;
    PLOGI << "Bed product show. Name: " << this->getName() << ", price: " << this->getPrice();
}
