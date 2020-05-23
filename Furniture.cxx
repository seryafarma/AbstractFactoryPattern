//-----------------------------------------------------------------------------
// File:   Furniture.cxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#include <abstract_factory_pattern/Furniture.hxx>
#include <plog/Log.h>

//-----------------------------------------------------------------------------
Furniture::Furniture(std::string name, unsigned int price)
:
    m_name(name),
    m_price(price)
{
    PLOGD;
}

//-----------------------------------------------------------------------------
Furniture::~Furniture()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Furniture::prepareParts()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Furniture::combineParts()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Furniture::assembleParts()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Furniture::applyLabel()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
void Furniture::showProduct()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
std::string Furniture::getName()
{
    PLOGD;
    return this->m_name;
}

//-----------------------------------------------------------------------------
unsigned int Furniture::getPrice()
{
    PLOGD;
    return this->m_price;
}
