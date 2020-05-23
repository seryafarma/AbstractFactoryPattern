//-----------------------------------------------------------------------------
// File:   FurnitureFactory.hxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#ifndef FURNITUREFACTORY_HXX_
#define FURNITUREFACTORY_HXX_

#include <abstract_factory_pattern/Furniture.hxx>
//-----------------------------------------------------------------------------
// \brief Factory class.
class Factory
{
public:
    //! \brief Virtual destructor for subclasses.
    virtual ~Factory();

    virtual Furniture::FurniPtr createChair() = 0;
    virtual Furniture::FurniPtr createTable() = 0;
    virtual Furniture::FurniPtr createBed() = 0;
};

//-----------------------------------------------------------------------------
// \brief Furniture Factory class.
class FurnitureFactory
{
public:
    //! \brief Constructor.
    FurnitureFactory();

    //! \brief Virtual destructor for subclasses.
    virtual ~FurnitureFactory();

    virtual Furniture::FurniPtr createChair();
    virtual Furniture::FurniPtr createTable();
    virtual Furniture::FurniPtr createBed();
};

#endif /* FURNITUREFACTORY_HXX_ */
