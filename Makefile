
main: main.o box.o checkerboard.o cross.o lower.o upper.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o upper.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

box.o: box.cpp funcs.h
	g++ -c box.cpp 

checkerboard.o: checkerboard.cpp funcs.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp funcs.h
	g++ -c cross.cpp

lower.o: lower.cpp funcs.h
	g++ -c lower.cpp

upper.o: upper.cpp funcs.h
	g++ -c upper.cpp

clean:
	rm -f main main.o box.o checkerboard.o cross.o lower.o upper.o