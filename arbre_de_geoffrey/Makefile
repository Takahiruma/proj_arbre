G= g++
wall= -Wall -std=c++11

all :: main.exe

%.o: %.cpp
	$(G) $(wall) -c $*.cpp 

main.exe: noeud.o arbre.o main.o
	$(G) $(wall) -o $@ $^
	
clean ::
	del -f *.o
	del -f *.exe

#la commande sous windows: mingw32-make