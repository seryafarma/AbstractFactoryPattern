//-----------------------------------------------------------------------------
// File:   Bed.hxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#ifndef BED_HXX_
#define BED_HXX_

#include <abstract_factory_pattern/Furniture.hxx>

//-----------------------------------------------------------------------------
// \brief Bed class.
class Bed: public Furniture
{
public:
    //! \brief Constructor.
    Bed(std::string name, unsigned int price);

    //! \brief Virtual destructor for subclasses.
    virtual ~Bed();

    //! \brief Show the product.
    virtual void showProduct();
};

#endif /* BED_HXX_ */
