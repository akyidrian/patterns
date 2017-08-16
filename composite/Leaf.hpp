/**
 * Leaf defines behaviour for primitive objects in the composition. Leaf objects
 * have no children.
 */
#ifndef LEAF_H
#define LEAF_H

#include "Component.hpp"

namespace Pattern {
    class Leaf : public Component {
        public:
            Leaf();
            ~Leaf();

            virtual void operation();
    };
}

#endif
