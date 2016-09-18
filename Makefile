output: main.o
	g++ main.o -o lab3

main.o: main.cpp
	g++ -c main.cpp


clean:
	rm *.o lab3
