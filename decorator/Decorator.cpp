#include "Decorator.hpp"

namespace Pattern {
    Decorator::~Decorator() {}

    Decorator::Decorator(Component* c) {
        component = c;
    }

    void Decorator::operation() {
        component->operation();
    }
}
