#include "Composite.hpp"
#include "Component.hpp"
#include <set>
#include <stddef.h>
#include <iostream>

namespace Pattern {
    Composite::Composite() {}

    /**
     * Delete all children, recursively.
     */
    Composite::~Composite() {
        std::set<Component*>::iterator it;
        for (it = children.begin(); it != children.end(); ++it) {
            delete (*it);
        }
    }

    void Composite::operation() {
        std::cout << "I'm a Composite with address:" << this << std::endl;

        std::set<Component*>::iterator it;
        for (it = children.begin(); it != children.end(); ++it) {
            (*it)->operation();
        }
    }

    void Composite::add(Component* c) {
        // Is c is this Composite object?
        if (c == this) { return; }

        // Does c already have a parent?
        if (c->getParent() != NULL) { return; }

        // Is c is not a child?
        if (children.find(c) == children.end()) {
            children.insert(c);
            c->setParent(this);
        }
    }

    void Composite::remove(Component* c) {
        if (c == NULL) { c = this; }  // Remove this Composite object?
        else if (children.find(c) == children.end()) { return; }  // Is c not a child?

        // Does c have a parent? If so, remove c from children.
        if(c->getParent() != NULL) { c->getParent()->getChildren().erase(c); }
        delete c;
    }
}
