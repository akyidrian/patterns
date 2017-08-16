# Definitions
TARGET = COMMAND
CC = g++
DEL = rm -f
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

# Default target
all: $(TARGET)

# Compile: Create object files from C source files
Main.o: Main.cpp Command.hpp
	$(CC) $(CFLAGS) $^

Invoker.o: Invoker.cpp Invoker.hpp
	$(CC) $(CFLAGS) $^

Receiver.o: Receiver.cpp Receiver.hpp
	$(CC) $(CFLAGS) $^

ConcreteCommand.o: ConcreteCommand.cpp ConcreteCommand.hpp
	$(CC) $(CFLAGS) $^

Command.o: Command.cpp Command.hpp
	$(CC) $(CFLAGS) $^

$(TARGET): Main.o Invoker.o Receiver.o ConcreteCommand.o Command.o
		$(CC) $(LFLAGS) $^ -o $@

# Remove old files
.PHONY: clean distclean
clean:
	$(DEL) *.gch *.o

distclean: clean
	$(DEL) $(TARGET)
