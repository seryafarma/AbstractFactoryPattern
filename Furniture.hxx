//-----------------------------------------------------------------------------
// File:   Toy.hxx
// Author: Enhope
// Date:   31-05-2019
//-----------------------------------------------------------------------------
#ifndef FURNITURE_HXX_
#define FURNITURE_HXX_

#include <string>
#include <memory>

//-----------------------------------------------------------------------------
// \brief Furniture class.
class Furniture
{
public:
    //! \brief Constructor.
    Furniture(std::string name, unsigned int price);

    //! \brief Virtual destructor for subclasses.
    virtual ~Furniture();

    // Smart Pointer.
    typedef std::unique_ptr<Furniture> FurniPtr;

    //! \brief Prepare the parts.
    void prepareParts();

    //! \brief Combine the parts.
    void combineParts();

    //! \brief Assemble the parts.
    void assembleParts();

    //! \brief Apply the label to the furniture.
    void applyLabel();

    //! \brief Show the product.
    virtual void showProduct();

    //! \brief Getter of the name.
    //! \return m_name.
    std::string getName();

    //! \brief Getter of the price.
    //! \return m_price.
    unsigned int getPrice();

private:
    //!< The name of the furniture.
    std::string m_name;
    //!< The price of the furniture.
    unsigned int m_price;
};

#endif /* FURNITURE_HXX_ */
