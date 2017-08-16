/**
 * Component:
 *  -Declares an interface for objects in the composition.
 *  -Implements default behaviour for the interface common to all classes.
 *  -Declares an interface for accessing and managing its child components.
 *  -(Optionally can) define an interface for accessing a component's parent in
 *   the recursive structure, and implements it if that's appropriate.
 */
#ifndef COMPONENT_H
#define COMPONENT_H

#include <set>

namespace Pattern {
    class Component {
        public:
            virtual ~Component();

            virtual void operation();
            virtual void add(Component* c);
            virtual void remove(Component* c);
            virtual std::set<Component*>& getChildren();

            // Not necessarily part of the Composite pattern, but is helpful.
            virtual Component* getParent();
            virtual void setParent(Component* p);
        protected:
            Component();
            Component* parent;
            std::set<Component*> children;  // Can use other data structures.
    };
}

#endif
