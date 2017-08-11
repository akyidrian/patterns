# Definitions
TARGET = OBSERVER
CC = g++
DEL = rm -f
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

# SRCS = Main.cpp Subject.cpp Observer.cpp ConcreteSubject.cpp ConcreteObserver.cpp
# OBJS = $(subst .cpp, .o, $(SRCS))

# Default target
all: $(TARGET)

# Compile: Create object files from C source files
Main.o: Main.cpp ConcreteSubject.hpp ConcreteObserver.hpp
	$(CC) $(CFLAGS) $^

Subject.o: Subject.cpp Subject.hpp
	$(CC) $(CFLAGS) $^

Observer.o: Observer.cpp Observer.hpp
	$(CC) $(CFLAGS) $^

ConcreteSubject.o: ConcreteSubject.cpp ConcreteSubject.hpp Subject.hpp
	$(CC) $(CFLAGS) $^

ConcreteObserver.o: ConcreteObserver.cpp ConcreteObserver.hpp ConcreteSubject.hpp Observer.hpp
	$(CC) $(CFLAGS) $^

$(TARGET): Main.o Subject.o Observer.o ConcreteSubject.o ConcreteObserver.o
		$(CC) $(LFLAGS) $^ -o $@

# Remove old files
.PHONY: clean distclean
clean:
	$(DEL) *.gch *.o

distclean: clean
	$(DEL) $(TARGET)
