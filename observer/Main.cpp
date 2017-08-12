#include <iostream>
#include <vector>
#include "ConcreteObserver.hpp"
#include "ConcreteSubject.hpp"

using namespace Pattern;

bool isConsistent(std::vector<ConcreteObserver*> observers, int newState) {
    std::vector<ConcreteObserver*>::iterator it;
    for (it = observers.begin(); it != observers.end(); ++it) {
          ConcreteObserver* o = (*it);
          if (o->getState() != newState) {
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

    int newState = 0;
    subject->setState(newState);
    if(!isConsistent(observers, newState)) {
        std::cout << "Observer state doesn't match!" << std::endl;
    }

    newState = 1;
    subject->setState(newState);
    if(!isConsistent(observers, newState)) {
        std::cout << "Observer state doesn't match!" << std::endl;
    }

    std::cout << "Success" << std::endl;
    delete subject;
    observers.clear();
}
