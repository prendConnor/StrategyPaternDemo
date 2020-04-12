//Different implementations of the tire interface

#ifndef TIRES_HPP

#include "TireInterface.hpp"

class Freestone : public TireInterface {
   public:
    Freestone(int newRad = 2, std::string newName = "Freestone")
        : TireInterface(newRad, newName) {}
    ~Freestone() {}

    int getRadius() { return this->radius; }
    std::string getName() { return this->name; }
};

class Michelin : public TireInterface {
   public:
    Michelin(int newRad = 4, std::string newName = "Michelin")
        : TireInterface(newRad, newName) {}
    ~Michelin() {}

    int getRadius() { return this->radius; }
    std::string getName() { return this->name; }
};

#endif