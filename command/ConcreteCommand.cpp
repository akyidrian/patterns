#include "ConcreteCommand.hpp"
#include "Receiver.hpp"

namespace Pattern {
    ConcreteCommand::ConcreteCommand(Receiver* r) {
        receiver = r;
    }

    ConcreteCommand::~ConcreteCommand() {}

    /**
     * If execute() is "undoable", or supports "undo" and "redo", then we will
     * need to introduce state to facilitate for this in the ConcreteCommand.
     * Avoiding error accumulation/hysteresis can be an issue with repeated
     * execute, unexecute, reexecute operations.
     */
    void ConcreteCommand::execute() {
        receiver->action();
    }
}
