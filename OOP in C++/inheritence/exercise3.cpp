#include <iostream>
#include <string>

// Base class Engine
class Engine {
public:
    void start() {
        std::cout << "Engine: Starting the engine." << std::endl;
    }
};

// Base class Wheels
class Wheels {
public:
    void start() {
        std::cout << "Wheels: Starting to rotate the wheels." << std::endl;
    }
};

// Derived class Car
class Car : public Engine, public Wheels {
public:
    // Resolving ambiguity by explicitly specifying which start method to call
    void startEngine() {
        Engine::start(); // Call Engine's start method
    }

    void startWheels() {
        Wheels::start(); // Call Wheels' start method
    }

    void startBoth() {
        Engine::start();
        Wheels::start();
    }
};

int main() {
    Car myCar;
    myCar.startEngine(); // Calls Engine's start method
    myCar.startWheels(); // Calls Wheels' start method

    std::cout << "\nCalling both start methods:" << std::endl;
    myCar.startBoth(); // Calls both methods explicitly

    return 0;
}