# Definitions
TARGET = COMPOSITE
CC = g++
DEL = rm -f
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

# Default target
all: $(TARGET)

# Compile: Create object files from C source files
Main.o: Main.cpp Component.hpp Composite.hpp Leaf.hpp
	$(CC) $(CFLAGS) $^

Component.o: Component.cpp Component.hpp
	$(CC) $(CFLAGS) $^

Leaf.o: Leaf.cpp Leaf.hpp Component.hpp
	$(CC) $(CFLAGS) $^

Composite.o: Composite.cpp Composite.hpp Component.hpp
	$(CC) $(CFLAGS) $^

$(TARGET): Main.o Component.o Leaf.o Composite.o
		$(CC) $(LFLAGS) $^ -o $@

# Remove old files
.PHONY: clean distclean
clean:
	$(DEL) *.gch *.o

distclean: clean
	$(DEL) $(TARGET)
