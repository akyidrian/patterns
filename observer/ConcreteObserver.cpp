#include "ConcreteObserver.hpp"
#include "ConcreteSubject.hpp"

namespace Pattern {
    ConcreteObserver::ConcreteObserver(ConcreteSubject* s) {
        subject = s;
        subject->attach(this);
    }

    ConcreteObserver::~ConcreteObserver() {
        subject->detach(this);
    }

    void ConcreteObserver::update(Subject* s) {
        if (subject == s) {
            observerState = subject->getState();
        }
    }

    // Not specifically part of the Observer pattern, as such.
    int ConcreteObserver::getState() {
        return observerState;
    }
}
