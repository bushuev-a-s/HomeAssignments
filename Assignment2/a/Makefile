PROJECT = text_inverting
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic
SRC = main2a.cpp invertText.cpp
OBJ = $(SRC:.cpp=.o)

all: $(PROJECT)

$(PROJECT): $(OBJ)
	$(CXX) -o $@ $^

%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)

clean:
	rm -f $(OBJ) $(PROJECT) %.pdf

.PHONY: all clean
