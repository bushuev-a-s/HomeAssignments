PROJECT = matrix
CC=g++
FLAGS=-std=c++17 -Wall -Wextra -pedantic
LIBS=-lgtest -lgtest_main -lpthread
SRC = test.cpp Rational.cpp
OBJ = $(SRC:.cpp=.o)

all: $(PROJECT)

$(PROJECT): $(OBJ)
	$(CC) $(FLAGS) $^ $(LIBS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -f *.o $(PROJECT)

.PHONY: all clean
