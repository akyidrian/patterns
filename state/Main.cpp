#include "Context.hpp"

using namespace Pattern;

// Basic test client for a two-state toggle state machine.
int main(int argc, char* argv[]) {
    Context* c = new Context();
    c->request();
    c->request();
    c->request();
    c->request();

    return 0;
}
