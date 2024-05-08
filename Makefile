TARGET  = name1

SRC     = source.c parse.c
OBJ     = $(SRC:.c=.o)

INCLUDE = -I. -I/msys64/ucrt64/include/libxml2/libxml -I/usr/include/libxml2

LIB     = -lreadline -lxml2

CC      = cc
CFLAGS  = --std=c99 -Wall -Wextra -Werror -pedantic -ggdb3 -Og

.SUFFIXES: .c

.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $<

all: $(TARGET)

$(TARGET): $(OBJ) $(TARGET).c
	$(CC) $(CFLAGS) $(INCLUDE) $(TARGET).c $(OBJ) $(LIB) -o $(TARGET)

clean:
	rm -f $(OBJ) $(TARGET).o $(TARGET)

clobber:
	make clean
	rm -f core *~
