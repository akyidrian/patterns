/**
 * ConcreteState subclasses each implement a behaviour associated with a state
 * of the Context. This ConcreteState is part of a simple two-state toggle
 * state machine.
 */
#ifndef CONCRETE_STATE_B_H
#define CONCRETE_STATE_B_H

#include "State.hpp"

namespace Pattern {
    class Context;

    class ConcreteStateB : public State {
        public:
            void handle(Context* context);
    };
}

#endif
