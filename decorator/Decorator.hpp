/**
 * Decorator maintains a reference to a Component object and defines an
 * interface that conforms to Component's interface.
 */
#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.hpp"

namespace Pattern {
    class Decorator : public Component {
        public:
            virtual ~Decorator();
            virtual void operation();
        protected:
            Decorator(Component* c);
        private:
            Component* component;
    };
}

#endif
