#include "Subject.hpp"
#include "Observer.hpp"

namespace Pattern {
    Subject::Subject() {}
    Subject::~Subject() {}

    /**
     * Some observers may only want to update after a particular event of
     * interest occurs. One way observers can be tied to an event is through
     * "aspects", which are used at registration and notification time.
     */
    void Subject::attach(Observer* o) {
        observers.push_back(o);
    }

    void Subject::detach(Observer* o) {
        observers.remove(o);
    }

    /**
     * When the dependency relationship between subjects and observers is
     * complex, encapsulating the complex update semantics in a "ChangeManager"
     * class may be a better option.
     */
    void Subject::notify() {
        std::list<Observer*>::iterator it;
        for (it = observers.begin(); it != observers.end(); ++it) {
              (*it)->update(this);
        }
    }
}
