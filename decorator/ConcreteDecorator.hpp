/**
 * ConcreteDecorator adds responsibilities to the component.
 */
#ifndef CONCRETE_DECORATOR_H
#define CONCRETE_DECORATOR_H

#include "Decorator.hpp"

namespace Pattern {
    class ConcreteDecorator : public Decorator {
        public:
            ConcreteDecorator(Component* c, int state);

            virtual void operation();
            virtual void addedBehaviour();
        private:
            const int addedState;
    };
}

#endif
