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
    class Subject;

    class ConcreteObserver : public Observer {
        public:
            ConcreteObserver(ConcreteSubject* s);
            ~ConcreteObserver();

            virtual void update(Subject* changedSubject);
            virtual int getState();
        private:
            int observerState;
            ConcreteSubject* subject;
    };
}

#endif
