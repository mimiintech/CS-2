CXX      = g++
CXXFLAGS = -Wall -Wextra -pedantic -g -std=c++11
OBJ      = complex.o

all: recursion.x

 recursion.x:   recursion.cpp
	$(CXX) $(CXXFLAGS)  recursion.cpp -o $@ 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf *.o  recursion.x
