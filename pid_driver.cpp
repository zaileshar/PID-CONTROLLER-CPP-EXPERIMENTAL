#include <iostream>

class Pid_driver {
public:
    void printStatus() {
        std::cout << "Pid_driver initialized." << std::endl;
    }
};
// Fixed identified race condition
