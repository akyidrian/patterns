#include "Composite.hpp"
#include "Component.hpp"
#include <set>

namespace Pattern {
    Composite::Composite() {}
    Composite::~Composite() {}

    void Composite::operation() {
        std::set<Component*>::iterator it;
        for (it = children.begin(); it != children.end(); ++it) {
            (*it)->operation();
        }
    }

    void Composite::add(Component* c) {
        children.insert(c);
    }

    void Composite::remove(Component* c) {
        children.erase(c);
    }

    void Composite::getChild(int i) {}
}
