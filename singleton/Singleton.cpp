/**
 * Singleton pattern defines an instance() method which is a class operation
 * to let clients access its unique instance. A Singleton usually also create
 * their own unique instance with lazy intialisation, as shown here.
 */
#include "Singleton.hpp"
#include <stddef.h>

namespace Pattern {
    Singleton* Singleton::mInstance = NULL;

    Singleton::Singleton() {}

    /**
     * Subclassing can be problematic in properly installing the right unique
     * instance so clients can use it. There are a few options to get around
     * this problem. This simplest being to move instance() implementation into
     * the subclass needed. Other options involve using a line of conditional
     * statements, environmental variables or registry maps, or a combination.
     */
    Singleton* Singleton::instance() {
        if (mInstance == NULL) {
            mInstance = new Singleton;
        }
        return mInstance;
    }
}
