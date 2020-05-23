//-----------------------------------------------------------------------------
// File:   main.cxx
// Author: Enhope
// Date:   23-05-2020
//-----------------------------------------------------------------------------
#include <iostream>
#include <vector>
#include "FurnitureFactory.hxx"

#include "plog/Log.h"
#include "plog/Appenders/ColorConsoleAppender.h"

//-----------------------------------------------------------------------------
int main()
{
    static plog::ColorConsoleAppender<plog::TxtFormatter> consoleAppender;
    plog::init(plog::debug, &consoleAppender);

    PLOGI << "Begin the abstract factory pattern";
    FurnitureFactory ff;

    PLOGI << "Make a room for rent with the furniture.";
    std::vector<Furniture::FurniPtr> rent_room_furnitures;
    rent_room_furnitures.push_back(std::move(ff.createBed()));
    rent_room_furnitures.push_back(std::move(ff.createChair()));
    rent_room_furnitures.push_back(std::move(ff.createTable()));

    PLOGI << "What do we have?";
    for(auto&& f : rent_room_furnitures)
    {
        f->showProduct();
    }

    return 0;
}
