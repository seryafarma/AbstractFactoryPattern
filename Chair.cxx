//-----------------------------------------------------------------------------
// File:   Bike.cxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#include <abstract_factory_pattern/Chair.hxx>
#include <plog/Log.h>

//-----------------------------------------------------------------------------
Chair::Chair(std::string name, unsigned int price)
:
    Furniture(name, price)
{
    PLOGD;
}

//-----------------------------------------------------------------------------
Chair::~Chair()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Chair::showProduct()
{
    PLOGD;
    PLOGI << "Chair product show. Name: " << this->getName() << ", price: " << this->getPrice();
}
