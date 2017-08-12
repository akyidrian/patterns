#include "Subject.hpp"
#include "Observer.hpp"

namespace Pattern {
    Subject::Subject() {}
    Subject::~Subject() {}

    void Subject::attach(Observer* o) {
        observers.push_back(o);
    }

    void Subject::detach(Observer* o) {
        observers.remove(o);
    }

    void Subject::notify() {
        std::list<Observer*>::iterator it;
        for (it = observers.begin(); it != observers.end(); ++it) {
              (*it)->update(this);
        }
    }
}
