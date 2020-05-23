//-----------------------------------------------------------------------------
// File:   Table.hxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#ifndef TABLE_HXX_
#define TABLE_HXX_

#include <abstract_factory_pattern/Furniture.hxx>

//-----------------------------------------------------------------------------
// \brief Table class.
class Table: public Furniture
{
public:
    //! \brief Constructor.
    Table(std::string name, unsigned int price);

    //! \brief Virtual destructor for subclasses.
    virtual ~Table();

    //! \brief Show the product.
    virtual void showProduct();
};

#endif /* TABLE_HXX_ */
