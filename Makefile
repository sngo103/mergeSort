CXXFLAGS=-std=c++11

main: main.o merge.o
	g++ -o main main.o merge.o 

main.o: main.cpp merge.h
	g++ $(CXXFLAGS) -c main.cpp

merge.o: merge.cpp merge.h
	g++ $(CXXFLAGS) -c merge.cpp

clean:
	rm -f main main.o merge.o
