/**
 * Subject provides an interface for attaching and detaching Observer objects,
 * and a way to notify all dependent observers of changes in a particular
 * Subject. Any number of observers may observe a Subject.
 */
#ifndef SUBJECT_H
#define SUBJECT_H

#include <set>

namespace Pattern {
    class Observer;

    class Subject {
        public:
            virtual ~Subject();

            virtual void attach(Observer* o);
            virtual void detach(Observer* o);
            virtual void notify();
        protected:
            Subject();
        private:
            std::set<Observer*> observers;
    };
}

#endif
