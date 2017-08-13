#include "Subject.hpp"
#include "Observer.hpp"
#include <set>

namespace Pattern {
    Subject::Subject() {}
    Subject::~Subject() {}

    /**
     * Some observers may only want to update after a particular event of
     * interest occurs. One way observers can be tied to an event is through
     * "aspects", which are used at registration and notification time.
     */
    void Subject::attach(Observer* o) {
        observers.insert(o);
    }

    void Subject::detach(Observer* o) {
        observers.erase(o);
    }

    /**
     * When the dependency relationship between subjects and observers is
     * complex, encapsulating the complex update semantics in a "ChangeManager"
     * class may be a better option.
     */
    void Subject::notify() {
        std::set<Observer*>::iterator it;
        for (it = observers.begin(); it != observers.end(); ++it) {
              (*it)->update();
        }
    }
}
