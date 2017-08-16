/**
 * Invoker asks a Command object to carry out the request.
 */
#ifndef INVOKER_H
#define INVOKER_H

#include "Command.hpp"

namespace Pattern {
    class Invoker {
        public:
            Invoker(Command* c);
            ~Invoker();
            virtual void storeCommand(Command* c);
            virtual void request();
        private:
            Command* command;
    };
}

#endif
