#include "ConcreteDecorator.hpp"
#include "Decorator.hpp"
#include <iostream>

namespace Pattern {
    ConcreteDecorator::ConcreteDecorator(Component* c, int state) : Decorator(c), addedState(state) {}

    void ConcreteDecorator::operation() {
        addedBehaviour();
        Decorator::operation();
    }

    void ConcreteDecorator::addedBehaviour() {
        std::cout << "I am a ConcreteDecorator with state: " << addedState << std::endl;
    }
}
