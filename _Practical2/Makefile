all: buildmain

buildmain: MusicalBand.o main.o
	g++ MusicalBand.o main.o -o program
	doxygen ./Doxyfile

MusicalBand.o: MusicalBand.cpp MusicalBand.h
	g++ -c ./MusicalBand.cpp ./MusicalBand.h

main.o: main.cpp
	g++ -c ./MainFunctions.h ./main.cpp
