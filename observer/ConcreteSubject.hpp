/**
 * ConcreteSubject is an instantiable class that stores the state of interest to
 * ConcreteObserver objects. ConcreteSubjects sends notifications to its
 * dependent observers when their state changes. The Subject interface helps
 * with keeping track of which observers to update.
 */

#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H

#include "Subject.hpp"

namespace Pattern {
    class ConcreteSubject : public Subject {
        public:
            ConcreteSubject();

            int getState();
            void setState(int newState);
        private:
            int subjectState;
    };
}

#endif
