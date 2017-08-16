#include "ConcreteCommand.hpp"
#include "Command.hpp"
#include "Receiver.hpp"
#include "Invoker.hpp"

using namespace Pattern;

// Basic test client.
int main(int argc, char* argv[]) {
    Receiver* r = new Receiver();
    Command* c = new ConcreteCommand(r);

    Invoker* i = new Invoker(c);
    i->request();

    return 0;
}
