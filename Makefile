# Makefile Programs
CC:= g++
CFLAGS:= -Wall -g -v -std=c++14 -c
OUTPUT:= programs

MK_BIN:= mkdir -p bin

SRC:= src/
INC:= inc/
BIN:= bin/

target: $(BIN)*.o $(OUTPUT) # For Clang Compiler
# target: $(BIN)*.gch $(BIN)*.o $(OUTPUT) # For gcc Compiler

# $(BIN)*.gch: $(INC)*.h
# 	$(CC) $(CFLAGS) $(INC)*.h
# 	mv $(INC)*.gch $(BIN)

$(BIN)*.o: $(SRC)*.cpp
	$(MK_BIN) | $(CC) $(CFLAGS) $(SRC)*.cpp -I $(INC)
	mv *.o $(BIN)

$(OUTPUT): $(BIN)*.o
	$(CC) $^ -o $@
	mv $@ $(BIN)

run:
	$(BIN)./$(OUTPUT)

memcheck:
	valgrind $(BIN)/./$(OUTPUT)

clean:
	-@$(RM) $(BIN)*