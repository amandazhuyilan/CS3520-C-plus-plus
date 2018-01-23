all: ASGN1

ASGN1: fizzbuzz.o fib.o sum.o reverse.o frame.o
	g++ fizzbuzz.o fib.o sum.o reverse.o frame.o -o ASGN1

fizzbuzz.o: fizzbuzz.cpp
	g++ -c fizzbuzz.cpp

fib.o: fib.cpp
	g++ -c fib.cpp

sum.o: sum.cpp
	g++ -c sum.cpp

reverse.o: reverse.cpp
	g++ -c reverse.cpp

frame.o: frame.cpp
	g++ -c frame.cpp

clean: 
	rm *o ASGN1 
