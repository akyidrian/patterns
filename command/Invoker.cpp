#include "Invoker.hpp"

namespace Pattern {
    Invoker::~Invoker() {}
    Invoker::Invoker(Command* c) {
        command = c;
    }

    void Invoker::storeCommand(Command* c) {
        command = c;
    }

    void Invoker::request() {
        command->execute();
    }
}
