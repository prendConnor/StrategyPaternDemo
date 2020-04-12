// DOES NOT USE STRATEGY PATTERN; DO NOT DO THIS

#ifndef BASICOBJS_HPP

#include <string>

class GoodYearTires {
   public:
    GoodYearTires(int size = 2, std::string name = "Goodyear")  // ctor
        : radius(size), brandName(name) {}
    ~GoodYearTires() {}                                // dtor
    int getRadius() { return this->radius; }           // get radius of tires
    std::string getName() { return this->brandName; }  // get name of tires

   private:
    int radius;             // radius of tires
    std::string brandName;  // brand name of tires
};

class GoodrichTires {
   public:
    GoodrichTires(int size = 2, std::string name = "Goodrich")  // ctor
        : radius(size), brandName(name) {}
    ~GoodrichTires() {}                                // dtor
    int getRadius() { return this->radius; }           // get radius of tires
    std::string getName() { return this->brandName; }  // get name of tires

   private:
    int radius;             // radius of tires
    std::string brandName;  // brand name of tires
};

class BasicCar {
   public:
    BasicCar(GoodYearTires* newTires) { gyTires = newTires; }  // ctor
    ~BasicCar() { delete gyTires; }                            // dtor
    int getTireSize() { return gyTires->getRadius(); }  // get tire radius
    std::string printBrandName() {                      // get name of tires
        return gyTires->getName();
    }
    std::string retBasic() { return "basic"; }  // show car is basic

   private:
    GoodYearTires* gyTires;  // the car's tires, will always be goodyear
};

#endif