#include "ConcreteComponent.hpp"
#include <iostream>

namespace Pattern {
    ConcreteComponent::ConcreteComponent() {}
    ConcreteComponent::~ConcreteComponent() {}

    void ConcreteComponent::operation() {
        std::cout << "I'm am a ConcreteComponent..." << std::endl;
    }
}
