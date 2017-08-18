#include "State.hpp"
#include "Context.hpp"

namespace Pattern {
    void State::handle(Context* context) {}

    void State::changeState(Context* context, State* newState) {
        context->changeState(newState);
    }
}
