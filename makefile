CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES= ninetynine.cpp ninetyninetest.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=ninetynine

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
