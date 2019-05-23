
Projet: animaux.o espace.o zoo.o bassin.o enclos.o cages.o main.o 
	g++ -g -Wall -o Projet animaux.o espace.o zoo.o bassin.o enclos.o cages.o main.o

espace.o:espace.cpp espace.h Template.h
	g++ -g -Wall -o espace.o -c espace.cpp 
bassin.o: bassin.cpp bassin.h espace.h Template.h
	g++ -g -Wall -o bassin.o -c bassin.cpp
cages.o: cages.cpp cages.h espace.h Template.h
	g++ -g -Wall -o cages.o -c cages.cpp
enclos.o: enclos.cpp enclos.h espace.h Template.h
	g++ -g -Wall -o enclos.o -c enclos.cpp


animaux.o:animaux.cpp animaux.h
	g++ -g -Wall -o animaux.o -c animaux.cpp

zoo.o: zoo.cpp zoo.h espace.h animaux.h Template.h bassin.h enclos.h cages.h
	g++ -g -Wall -o zoo.o -c zoo.cpp

main.o:main.cpp Template.h animaux.h espace.h bassin.h cages.h enclos.h zoo.h
	g++ -g -Wall -o main.o -c main.cpp


