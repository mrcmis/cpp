CXX=g++
CXXFLAGS+=-Wall -O0 $(GXX_FLAGS)
CXXFLAGS+=-Wall -Wextra -pedantic -g 

DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: Array

Array: $(OBJ)
	$(CXX) $(LFLAGS) $(OBJ) -o $@
	@echo wywoluje g++
.PHONY: clean run

clean:
	@rm -f Array $(OBJ) $(DEP)

run: Array
	@./Array
valgrind: Array
	@valgrind --leak-check=full ./Array
gdb: Mapa
	@gdb ./Array
-include $(DEP)
