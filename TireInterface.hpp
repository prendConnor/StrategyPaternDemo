//Tire interface used to implement the strategy pattern

#ifndef TIREINTERFACE_HPP

#include <iostream>
#include <string>

class TireInterface {
   public:
    TireInterface(int newRad, std::string newName)
        : radius(newRad), name(newName) {}
    virtual ~TireInterface() {};
    virtual int getRadius() = 0;
    virtual std::string getName() = 0;

   protected:
    int radius;
    std::string name;
};

#endif