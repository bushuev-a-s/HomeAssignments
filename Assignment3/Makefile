PROJECT = Hierarchy
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic
SRC = main.cpp Autobot.cpp Decepticon.cpp Driveable.cpp Gun.cpp Pilot.cpp Transformer.cpp
OBJ = $(SRC:.cpp=.o)

all: $(PROJECT)

$(PROJECT): $(OBJ)
        $(CXX) -o $@ $^

%.o: %.cpp
        $(CXX) -c $< -o $@ $(CXXFLAGS)

clean:
        rm -f $(OBJ) $(PROJECT)

.PHONY: all clean
