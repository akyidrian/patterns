# Definitions
TARGET = DECORATOR
CC = g++
DEL = rm -f
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

# Default target
all: $(TARGET)

# Compile: Create object files from C source files
Main.o: Main.cpp
	$(CC) $(CFLAGS) $^

Component.o: Component.cpp Component.hpp
	$(CC) $(CFLAGS) $^

ConcreteComponent.o: ConcreteComponent.cpp ConcreteComponent.hpp
	$(CC) $(CFLAGS) $^

Decorator.o: Decorator.cpp Decorator.hpp
	$(CC) $(CFLAGS) $^

ConcreteDecorator.o: ConcreteDecorator.cpp ConcreteDecorator.hpp
	$(CC) $(CFLAGS) $^

$(TARGET): Main.o Component.o Decorator.o ConcreteDecorator.o ConcreteComponent.o
		$(CC) $(LFLAGS) $^ -o $@

# Remove old files
.PHONY: clean distclean
clean:
	$(DEL) *.gch *.o

distclean: clean
	$(DEL) $(TARGET)
