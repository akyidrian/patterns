#ifndef CONCRETE_OBSERVER_H
#define CONCRETE_OBSERVER_H

#include "Observer.hpp"

namespace Pattern {
    class ConcreteSubject;
    class Subject;

    class ConcreteObserver : public Observer {
        public:
            ConcreteObserver(ConcreteSubject*);
            ~ConcreteObserver();

            virtual void update(Subject*);
            virtual int getState();
        private:
            int observerState;
            ConcreteSubject* subject;
    };
}

#endif
