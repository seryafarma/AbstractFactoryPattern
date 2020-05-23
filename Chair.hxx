//-----------------------------------------------------------------------------
// File:   Chair.hxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#ifndef CHAIR_HXX_
#define CHAIR_HXX_

#include <abstract_factory_pattern/Furniture.hxx>

//-----------------------------------------------------------------------------
// \brief Chair class.
class Chair: public Furniture
{
public:
    //! \brief Constructor.
    Chair(std::string name, unsigned int price);

    //! \brief Virtual destructor for subclasses.
    virtual ~Chair();

    //! \brief Show the product.
    virtual void showProduct();
};

#endif /* CHAIR_HXX_ */
