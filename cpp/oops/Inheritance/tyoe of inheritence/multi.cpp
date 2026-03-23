#include <iostream>
using namespace std;

class Engine {
public:
    void start() { cout << "Engine started" << endl; }
};

class Wheels {
public:
    void roll() { cout << "Wheels rolling" << endl; }
};

class Car : public Engine, public Wheels {
public:
    void drive() { cout << "Car driving" << endl; }
};

int main() {
    Car c;
    c.start();
    c.roll();
    c.drive();
    return 0;
}