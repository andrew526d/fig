CC=gcc
SOURCES=main.c test.c array.c figure.c
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=fig


all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.c *.h
	$(CC) $(CFLAGS) $< -o $@