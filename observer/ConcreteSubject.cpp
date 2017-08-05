#include "ConcreteSubject.hpp"

namespace Pattern {
    ConcreteSubject:: ConcreteSubject() {}

    int ConcreteSubject::getState() {
        return subjectState;
    }

    void ConcreteSubject::setState(int s) {
        subjectState = s;
        notify();
    }
}
