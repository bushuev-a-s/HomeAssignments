PROJECT = matrix
CC=g++
FLAGS=-std=c++17 -Wall -Wextra -pedantic
LIBS=-lgtest -lgtest_main -lpthread

all: $(PROJECT)

$(PROJECT): test.o
	$(CC) $(FLAGS) $^ $(LIBS) -o $@

test.o: test.cpp
	$(CC) $(FLAGS) -c test.cpp

clean:
	rm -f *.o $(PROJECT)

.PHONY: all clean
