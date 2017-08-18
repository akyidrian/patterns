/**
 * State defines an interface for encapsulating the behaviour associated with a
 * particular state of the Context.
 */
#ifndef STATE_H
#define STATE_H

namespace Pattern {
    class Context;
    class State;

    class State {
        public:
            virtual void handle(Context* context);
        protected:
            void changeState(Context* context, State* newState);
    };
}

#endif
