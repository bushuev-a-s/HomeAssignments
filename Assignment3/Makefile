CXX = g++
CXXFLAGS = -std=c++17 -Wall -I. -fPIC
ARFLAGS = rcs
LIBS = -lgtest -lgtest_main -lpthread

PROJECT = hierarchy
LIBPROJECT = lib$(PROJECT).a
TESTPROJECT = test-$(PROJECT)

SRCS = Transformer.cpp Autobot.cpp Decepticon.cpp Driveable.cpp Gun.cpp Pilot.cpp
TEST_SRCS = $(SRCS:.cpp=_test.cpp)

OBJS = $(SRCS:.cpp=.o)
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

all: $(TESTPROJECT)

$(LIBPROJECT): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(TESTPROJECT): $(TEST_OBJS) $(LIBPROJECT)
	$(CXX) -o $@ $^ $(CXXFLAGS) -L. -l:$(LIBPROJECT) $(LIBS)

test: $(TESTPROJECT)
	./$(TESTPROJECT)

clean:
	rm -f *.o $(PROJECT) $(TESTPROJECT) $(LIBPROJECT)

.PHONY: all clean test
