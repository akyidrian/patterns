#include "Singleton.hpp"
#include <iostream>

using namespace Pattern;

// Basic test client.
int main(int argc, char* argv[]) {
    Singleton* singleton1 = Singleton::instance();
    Singleton* singleton2 = Singleton::instance();

    if (singleton1 != singleton2) {
        std::cout << "Not the same object!" << std::endl;
    }

    std::cout << "Success!" << std::endl;
    return 0;
}
