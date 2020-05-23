# Abstract Method Pattern
Similar to Factory Method, this pattern creates objects however for more than 1 product type.

In this example though only one product type is created. For more, it can be done easily by subclassing the ```Factory``` class into like ```KidsBedRoomFurnitureFactory```.
The example is that the ```FurnitureFactory``` is now used to create a BedRoom (might as well rename this to ```StudentBedRoomFactory```).
Later, the ```main.cxx``` uses this concrete factory to make the objects.

This is similar to the Factory Method Pattern.
https://github.com/seryafarma/FactoryMethodPattern

## Credits:
### The logging library: plog
https://github.com/SergiusTheBest/plog

## Read also:
https://refactoring.guru/design-patterns/abstract-factory
