#include "Composite.hpp"
#include "Leaf.hpp"
#include "Leaf.hpp"

using namespace Pattern;

// Basic test client.
int main(int argc, char *argv[]) {
    Composite* composite = new Composite();
    composite->add(new Leaf());

    return 0;
}
