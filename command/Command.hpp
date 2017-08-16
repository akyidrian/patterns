/**
 * Command declares an interface for executing an operation.
 */
#ifndef COMMAND_H
#define COMMAND_H

namespace Pattern {
    class Command {
        public:
            virtual ~Command();

            virtual void execute() = 0;
        protected:
            Command();
    };
}

#endif
