# Definitions
TARGET = SINGLETON 
CC = g++
DEL = rm -f
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

# Default target
all: $(TARGET)

# Compile: Create object files from C source files
Main.o: Main.cpp Singleton.hpp 
	$(CC) $(CFLAGS) $^

Singleton.o: Singleton.cpp Singleton.hpp
	$(CC) $(CFLAGS) $^

$(TARGET): Main.o Singleton.o
		$(CC) $(LFLAGS) $^ -o $@

# Remove old files
.PHONY: clean distclean
clean:
	$(DEL) *.gch *.o

distclean: clean
	$(DEL) $(TARGET)
