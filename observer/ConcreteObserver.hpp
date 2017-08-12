/**
 * ConcreteObserver is an instantiable class that maintains a reference to a
 * ConcreteSubject object and stores state that should stay consistent with the
 * subject's. The Observer interface helps keep state consistent.
 */
#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H

#include "Observer.hpp"

namespace Pattern {
    class ConcreteSubject;

    class ConcreteObserver : public Observer {
        public:
            ConcreteObserver();
            ConcreteObserver(ConcreteSubject* s);
            ~ConcreteObserver();

            virtual void update();
            virtual void setSubject(ConcreteSubject* newSubject);
            virtual int getState();
        private:
            int observerState;  // Using a plain int to represent some state.
            ConcreteSubject* subject;
    };
}

#endif
