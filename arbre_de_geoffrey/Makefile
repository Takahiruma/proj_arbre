G= g++
wall= -Wall -std=c++11

all :: huff.exe

%.o: %.cpp
	$(G) $(wall) -c $*.cpp 

huff.exe: main.o
	$(G) $(wall) -o $@ $^
#noeud.o arbre.o	
clean ::
	del -f *.o
	del -f *.exe

#la commande sous windows: mingw32-make