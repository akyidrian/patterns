#include "ConcreteStateB.hpp"
#include "ConcreteStateA.hpp"
#include "Context.hpp"
#include <iostream>

namespace Pattern {
    void ConcreteStateB::handle(Context* context) {
        std::cout << "ConcreteStateB" << std::endl;
        changeState(context, new ConcreteStateA());
    }
}
