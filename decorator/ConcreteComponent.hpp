/**
 * ConcreteComponent defines an object to which additional responsibilities can
 * be attached.
 */
#ifndef CONCRETE_COMPONENT_H
#define CONCRETE_COMPONENT_H

#include "Component.hpp"

namespace Pattern {
    class ConcreteComponent : public Component {
        public:
            ConcreteComponent();
            ~ConcreteComponent();

            virtual void operation();
    };
}

#endif
