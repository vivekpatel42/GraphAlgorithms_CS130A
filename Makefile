
all:
	g++ -g -std=c++0x -o prog Graph.cc Main.cc
test:
	./timeCheck
