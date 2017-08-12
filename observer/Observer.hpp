/**
 * Observer provides an updating interface for Observer objects that should be
 * notified of changes in the subject they are subscribed to.
 */
#ifndef OBSERVER_H
#define OBSERVER_H

namespace Pattern {
    class Subject;

    class Observer {
        public:
            virtual ~Observer();

            virtual void update(Subject* changedSubject) = 0;
        protected:
            Observer();
    };
}

#endif
