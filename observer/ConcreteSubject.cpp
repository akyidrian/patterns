#include "ConcreteSubject.hpp"

namespace Pattern {
    ConcreteSubject:: ConcreteSubject() {}

    int ConcreteSubject::getState() {
        return subjectState;
    }

    /**
     * Calling this method results in a notify() to occur.
     */
    void ConcreteSubject::setState(int newState) {
        subjectState = newState;
        notify();
    }
}
