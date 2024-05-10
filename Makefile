CFLAGS=--std=c99 -Wall -Wextra -Werror -pedantic -ggdb3 -Og $(shell sdl2-config --cflags) $(wildcard src/*.c)
LDFLAGS=$(shell sdl2-config --libs) -I/usr/include/libxml2 -lreadline -lSDL2_image -lxml2

PROGRAMS=$(basename $(wildcard *.c))

all: $(PROGRAMS)

clean:
	rm -f $(PROGRAMS) *.o *~

new: clean all
