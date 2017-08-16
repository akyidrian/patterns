/**
 * Composite defines behaviour for components that can have children. It stores
 * child components and implements child-related operations from Component.
 */
#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "Component.hpp"

namespace Pattern {
    class Composite : public Component {
        public:
            Composite();
            ~Composite();

            virtual void operation();
            virtual void add(Component* c);
            virtual void remove(Component* c);
    };
}

#endif
