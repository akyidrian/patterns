#include "Leaf.hpp"
#include <iostream>

namespace Pattern {
    Leaf::Leaf() {}
    Leaf::~Leaf() {}

    void Leaf::operation() {
        std::cout << "I'm a Leaf with address:" << this << std::endl;
    }
}
