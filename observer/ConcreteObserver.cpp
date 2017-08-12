#include "ConcreteObserver.hpp"
#include "ConcreteSubject.hpp"
#include <stddef.h>

namespace Pattern {
    ConcreteObserver::ConcreteObserver() {
        subject = NULL;
        observerState = 0;
    }

    ConcreteObserver::ConcreteObserver(ConcreteSubject* s) {
        subject = s;
        subject->attach(this);
        observerState = 0;
    }

    ConcreteObserver::~ConcreteObserver() {
        if (subject != NULL) {
            subject->detach(this);
        }
    }

    void ConcreteObserver::update() {
        if (subject != NULL) {
            observerState = subject->getState();
        }
    }

    void ConcreteObserver::setSubject(ConcreteSubject* newSubject) {
        if (subject != NULL) {
            subject->detach(this);
        }
        subject = newSubject;
        subject->attach(this);
    }

    /**
     * Not specifically part of the Observer pattern, as such.
     */
    int ConcreteObserver::getState() {
        return observerState;
    }
}
