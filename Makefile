OBJ             = demo.o test_demo.o
CXXFLAGS        = -std=c++11 -Wall -Werror

all:            demo

demo:           $(OBJ)
		$(CXX) $(LDFLAGS) $(OBJ) -o $@

clean:
		rm -f *.o demo

test:           demo
		./demo -s
