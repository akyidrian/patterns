#include "ConcreteDecorator.hpp"
#include "ConcreteComponent.hpp"

using namespace Pattern;

// Basic test client.
int main(int argc, char* argv[]) {
    ConcreteDecorator* ConcreteDecorator1 = new ConcreteDecorator(new ConcreteComponent(), 1);
    ConcreteDecorator* ConcreteDecorator2 = \
        new ConcreteDecorator(ConcreteDecorator1, 2);

    ConcreteDecorator2->operation();

    return 0;
}
