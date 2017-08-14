#ifndef SINGLETON_H
#define SINGLETON_H

namespace Pattern {
    class Singleton {
        public:
            static Singleton* instance();
        protected:
            Singleton();
        private:
            static Singleton* mInstance;
    };
}

#endif
