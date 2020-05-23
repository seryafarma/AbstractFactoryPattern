//-----------------------------------------------------------------------------
// File:   Table.cxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#include <abstract_factory_pattern/Table.hxx>
#include <plog/Log.h>

//-----------------------------------------------------------------------------
Table::Table(std::string name, unsigned int price)
:
   Furniture(name, price)
{
    PLOGD;
}

//-----------------------------------------------------------------------------
Table::~Table()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Table::showProduct()
{
    PLOGD;
    PLOGI << "Table product show. Name: " << this->getName() << ", price: " << this->getPrice();
}
