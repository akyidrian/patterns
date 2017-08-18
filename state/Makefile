# Definitions
TARGET = STATE
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

Context.o: Context.cpp Context.hpp
	$(CC) $(CFLAGS) $^

State.o: State.cpp State.hpp
	$(CC) $(CFLAGS) $^

ConcreteStateA.o: ConcreteStateA.cpp ConcreteStateA.hpp
	$(CC) $(CFLAGS) $^

ConcreteStateB.o: ConcreteStateB.cpp ConcreteStateB.hpp
	$(CC) $(CFLAGS) $^

$(TARGET): Main.o Context.o State.o ConcreteStateA.o ConcreteStateB.o
		$(CC) $(LFLAGS) $^ -o $@

# Remove old files
.PHONY: clean distclean
clean:
	$(DEL) *.gch *.o

distclean: clean
	$(DEL) $(TARGET)
