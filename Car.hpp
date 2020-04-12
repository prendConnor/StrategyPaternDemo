//Car object with TireInterface member var (following the strategy pattern)

#ifndef CAR_HPP

#include "Tires.hpp"

class Car {
   public:
    Car(TireInterface *newTires) {
        tires = newTires;
    }

    ~Car() {delete tires;}

    int getTireSize() { return tires->getRadius(); }
    std::string getBrandName() { return tires->getName(); }
    std::string retNotBasic() { return "not basic"; }

    void setNewTires(TireInterface *newTires) {
        delete tires;
        this->tires = newTires;
    }

   private:
    TireInterface *tires;
};

#endif