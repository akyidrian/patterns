/**
 * Context defines the interface of interest to clients, and maintains an
 * instance of a ConcreteState subclass that defines the current state.
 *
 * This boilerplate State Pattern example is of a two-state toggle state
 * machine. We have opted to decentralise state transision logic and create
 * and destroy states as needed. More info on what this all mean below...
 *
 * Who should define the state transition? Context or the state subclasses?
 * The State Pattern doesn't specify where you should define the state
 * transition logic. One option is implementing it entirely in the Context;
 * if transition criteria are fixed then this generally is okay although
 * inflexible. The other option is to decentralise transition logic by letting
 * state subclasses decide for themselves; this is more flexible but subclasses
 * will now have at least one dependency between each other.
 *
 * What about creating and destroying State objects?
 * An implementation trade off that has to be considered is whether to (1)
 * create and destroy State objects as needed or (2) create ahead of time and
 * never destroy State objects. (1) is good when states that will be entered
 * into aren't known at run-time, and/or when context state changes are
 * infrequent. (2) is good when context state changes are frequent (as you will
 * avoid instantiation and destruction costs), but you do have to manage
 * references to the states. This type of decision may also depend on whether
 * you share solely behavioural state objects between different contexts.
 */
#ifndef CONTEXT_H
#define CONTEXT_H

namespace Pattern {
    class State;

    class Context {
        public:
            Context();

            void request();
        private:
            friend class State;
            void changeState(State* newState);
        private:
            State* state;
    };
}

#endif
