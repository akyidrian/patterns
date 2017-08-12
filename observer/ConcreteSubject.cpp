#include "ConcreteSubject.hpp"

namespace Pattern {
    ConcreteSubject:: ConcreteSubject() {}

    int ConcreteSubject::getState() {
        return subjectState;
    }

    /**
     * In some cases it is better for the client to be responsible for the
     * notify() to avoid a lot of update calls being made to observers. In any
     * case, notify() methods or the client responsibility to notify() should be
     * clearly documented.
     */
    void ConcreteSubject::setState(int newState) {
        subjectState = newState;
        notify();
    }
}
