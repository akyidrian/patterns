/**
 * Receiver knows how to perform the operations associated with carrying out a
 * request. Any class may serve as a Receiver.
 */
#ifndef RECEIVER_H
#define RECEIVER_H

namespace Pattern {
    class Receiver {
        public:
            virtual void action();
    };
}

#endif
