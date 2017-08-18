#include "ConcreteStateA.hpp"
#include "ConcreteStateB.hpp"
#include "Context.hpp"
#include <iostream>

namespace Pattern {
    void ConcreteStateA::handle(Context* context) {
        std::cout << "ConcreteStateA" << std::endl;
        changeState(context, new ConcreteStateB());
    }
}
