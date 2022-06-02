CXX = g++
all: 
	$(CXX) -std=c++2a -o main main.cpp Electron.cpp
prep:
	$(CXX) -std=c++2a -E -o preprocessed.ii main.cpp Electron.cpp 
asm: 
	$(CXX) -std=c++2a -S -o my_asm_output.s main.cpp Electron.cpp
and_execute: all
	./main
clean: 
	rm ./main