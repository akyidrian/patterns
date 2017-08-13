#include <iostream>
#include <vector>
#include "ConcreteObserver.hpp"
#include "ConcreteSubject.hpp"

using namespace Pattern;

bool isConsistent(std::vector<ConcreteObserver*> observers, int newState) {
    std::vector<ConcreteObserver*>::iterator it;
    for (it = observers.begin(); it != observers.end(); ++it) {
        if ((*it)->getState() != newState) {
            return false;
        }
    }
    return true;
}

// Basic unit testing.
int main(int argc, char *argv[]) {
    ConcreteSubject* subject = new ConcreteSubject();
    std::vector<ConcreteObserver*> observers;

    for(int i = 0; i < 3; i++) {
        observers.push_back(new ConcreteObserver(subject));
    }

    // Setting a state in the Subject and checking Observers.
    int newState = -1;
    subject->setState(newState);
    if(!isConsistent(observers, newState)) {
        std::cout << "Observers have inconsistent state!" << std::endl;
    }

    // Changing state in the Subject and checking Observers.
    newState = 1;
    subject->setState(newState);
    if(!isConsistent(observers, newState)) {
        std::cout << "Observers have inconsistent state!" << std::endl;
    }

    std::cout << "Success! State is consistent!" << std::endl;
    delete subject;
    observers.clear();
}
