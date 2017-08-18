#include "Context.hpp"
#include "State.hpp"
#include "ConcreteStateA.hpp"

namespace Pattern {
    /**
     * Transistion logic is defined in the ConcreteStates and for simplicity
     * we are creating the states as we need them. Detailed notes on these
     * topics are found in State.hpp.
     */
    Context::Context() {
        changeState(new ConcreteStateA());
    }

    void Context::changeState(State* newState) {
        state = newState;
    }

    void Context::request() {
        state->handle(this);
    }
}
