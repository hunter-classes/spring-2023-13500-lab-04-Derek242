
main: main.o box.o checkerboard.o
	g++ -o main main.o box.o checkerboard.o

main.o: main.cpp funcs.h
	g++ -c main.cpp

box.o: box.cpp funcs.h
	g++ -c box.cpp 

checkerboard.o: checkerboard.cpp funcs.h
	g++ -c checkerboard.cpp

clean:
	rm -f main.o box.o checkerboard.o