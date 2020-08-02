OBJ             = demo.o test_demo.o catch.o
CXXFLAGS        = -std=c++11 -O -g -Wall -Werror
LDFLAGS         = -g

all:            demo

demo:           $(OBJ)
		$(CXX) $(LDFLAGS) $(OBJ) -o $@

clean:
		rm -f *.o demo

test:           demo
		./demo -s -r compact
