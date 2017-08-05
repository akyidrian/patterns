#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>

namespace Pattern {
    class Observer;

    class Subject {
        public:
            virtual ~Subject();
            
            virtual void attach(Observer*);
            virtual void detach(Observer*);
            virtual void notify();
        protected:
            Subject();
        private:
            std::list<Observer*> observers;
    };
}

#endif
