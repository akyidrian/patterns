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
