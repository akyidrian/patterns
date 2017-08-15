#include "Component.hpp"
#include <stddef.h>
#include <set>

namespace Pattern {
    Component::Component() {
        parent = NULL;
    }

    Component::~Component() {
        children.clear();
    }

    /**
     * Trade off between maximising component interface (making client unable
     * to disguish between Leaf and Composite classes (uniformity)) and obeying
     * the principle of class hierarchy (class should only define operations
     * meaningful to its subclasses). Child-related operation in Component vs.
     * Composite. Transparency vs. safety.
     *
     * There are a few different ways to do things for either choice.
     */
     void Component::operation() {}
     void Component::add(Component* c) {}
     void Component::remove(Component* c) {}
     std::set<Component*>& Component::getChildren() {
         return children;
     }

     /**
      * Having an explicit parent reference simplifies traveral and management of
      * composite structure. Composite class add() and remove() methods need to
      * maintain the parent reference invariant usually.
      */
     void Component::setParent(Component* p) {
         parent = p;
     }
     Component* Component::getParent() {
         return parent;
     }
}
