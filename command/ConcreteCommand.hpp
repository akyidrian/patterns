/**
 * ConcreteCommand defines a binding between a Receiver object and the actions
 * that carry out the request. This is done by implementing the Command
 * interface and defining the execute operation in terms of the corresponding
 * operation(s) found in the Receiver.
 */
#ifndef CONCRETE_COMMAND_H
#define CONCRETE_COMMAND_H

#include "Command.hpp"

namespace Pattern {
    class Receiver;

    class ConcreteCommand : public Command {
        public:
            ~ConcreteCommand();
            ConcreteCommand(Receiver* r);

            virtual void execute();
        private:
            Receiver* receiver;
    };
}

#endif
