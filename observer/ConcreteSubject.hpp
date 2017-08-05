#ifndef CONCRETE_SUBJECT_H
#define CONCRETE_SUBJECT_H

#include "Subject.hpp"

namespace Pattern {
    class ConcreteSubject : public Subject {
        public:
            ConcreteSubject();

            int getState();
            void setState(int);
        private:
            int subjectState;
    };
}

#endif
