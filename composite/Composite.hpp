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
