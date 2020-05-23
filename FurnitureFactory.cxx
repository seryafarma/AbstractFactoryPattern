//-----------------------------------------------------------------------------
// File:   FurnitureFactory.cxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#include <abstract_factory_pattern/FurnitureFactory.hxx>
#include <abstract_factory_pattern/Bed.hxx>
#include <abstract_factory_pattern/Chair.hxx>
#include <abstract_factory_pattern/Table.hxx>
#include <plog/Log.h>

//-----------------------------------------------------------------------------
FurnitureFactory::FurnitureFactory()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
FurnitureFactory::~FurnitureFactory()
{
    PLOGD;
}

//-----------------------------------------------------------------------------
Furniture::FurniPtr FurnitureFactory::createChair()
{
    auto fptr = std::make_unique<Chair>("Kursi Belajar", 1500000);

    fptr->prepareParts();
    fptr->combineParts();
    fptr->assembleParts();
    fptr->applyLabel();

    return fptr;
}

//-----------------------------------------------------------------------------
Furniture::FurniPtr FurnitureFactory::createTable()
{
    auto fptr = std::make_unique<Table>("Meja Komputer", 2500000);

    fptr->prepareParts();
    fptr->combineParts();
    fptr->assembleParts();
    fptr->applyLabel();

    return fptr;
}

//-----------------------------------------------------------------------------
Furniture::FurniPtr FurnitureFactory::createBed()
{
    auto fptr = std::make_unique<Bed>("Kasur Spring Bed", 6000000);

    fptr->prepareParts();
    fptr->combineParts();
    fptr->assembleParts();
    fptr->applyLabel();

    return fptr;
}
