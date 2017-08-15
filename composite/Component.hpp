#ifndef COMPONENT_H
#define COMPONENT_H

namespace Pattern {
    class Component {
        public:
            virtual ~Component();

            virtual void operation();
            virtual void add(Component* c);
            virtual void remove(Component* c);
            virtual void getChild(int i);
        protected:
            Component();
    };
}

#endif
