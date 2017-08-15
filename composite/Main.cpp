#include "Composite.hpp"
#include "Leaf.hpp"
#include "Component.hpp"
#include <iostream>
#include <stddef.h>

using namespace Pattern;

// Basic test client.
int main(int argc, char *argv[]) {
    Component* composite1 = new Composite();
    Component* composite2 = new Composite();
    Component* composite3 = new Composite();
    Component* leaf1 = new Leaf();
    Component* leaf2 = new Leaf();
    Component* leaf3 = new Leaf();

    composite1->add(leaf1);
    composite1->add(composite2);

    composite2->add(leaf2);
    composite2->add(composite3);

    composite3->add(leaf3);

    composite1->operation();

    composite1->remove(composite2);
    composite1->operation();

    composite1->remove(NULL);

    return 0;
}
