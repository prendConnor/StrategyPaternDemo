#include <iostream>

#include "BasicObjs.hpp"
#include "Car.hpp"

#define STRAT_DEMO "strat"
#define NOT_STRAT_DEMO "notStrat"

void printCarInfo(std::string brand, int size, std::string isBasic) {
    std::cout << "This car is: " << isBasic << "!\n";
    std::cout << "This car has " << brand << " brand tires"
              << " with radius: " << size << std::endl;
}

int main(int argc, const char *argv[]) {
    // comment out/delete if statements to run both demos
    if(argc != 2) {
        std::cout << "enter demo option: strat or notStrat\n";
        return 0;
    }

    std::string argument(argv[1]);

    // NOT USING STRATEGY PATTERN
    if(argument == NOT_STRAT_DEMO) {
        std::string name = "Goodyear";
        GoodYearTires *gyTires = new GoodYearTires();  // default params: 2,
                                                       // GoodYear
        BasicCar *car = new BasicCar(gyTires);  // construct car with tires

        printCarInfo(car->printBrandName(), car->getTireSize(),
                     car->retBasic());

        // without using the strategy pattern we cannot change the tires to
        // Goodrich The following line will not compile:
        //*car = new BasicCar(new GoodrichTires());

        delete car;
    }

    // USING STRATEGY PATTERN
    if(argument == STRAT_DEMO) {
        Freestone *freestoneTires =
            new Freestone();  // default args: 2,Freestone
        Car *notBasicCar = new Car(freestoneTires);  // construct car with tires

        printCarInfo(notBasicCar->getBrandName(), notBasicCar->getTireSize(),
                     notBasicCar->retNotBasic());

        // now if you want a different brand (object) of tires, you can change
        // them!

        Michelin *michelinTires = new Michelin;  // default args: 4,Michelin
        notBasicCar->setNewTires(
            michelinTires);  // switch to different tire object

        printCarInfo(notBasicCar->getBrandName(), notBasicCar->getTireSize(),
                     notBasicCar->retNotBasic());

        delete notBasicCar;
    }

    return 0;
}