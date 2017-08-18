/**
 * Component defines the interface for objects that can have responsibilities
 * added to them dynamically.
 *
 * To ensure interface conformity across components and decorators, it is
 * important to keep the Component class, which is a common class, lightweight.
 * This means it should focus on defining an interface rather than storing data;
 * deferring data representation to subclasses reduces complexity as well as
 * preventing decorators from becoming heavyweight to use in quantity. If
 * deferment is not possible and the Component class has to be heavyweight,
 * it may be best to consider the Stategy Pattern instead; i.e. a "changing the
 * guts" over "changing the skin".
 */
#ifndef COMPONENT_H
#define COMPONENT_H

namespace Pattern {
    class Component {
        public:
            virtual ~Component();
            virtual void operation() = 0;
        protected:
            Component();
    };
}

#endif
