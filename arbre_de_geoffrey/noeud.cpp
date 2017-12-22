#include "noeud.hpp"

noeud::noeud(std::string m, noeud* p):pere(p),fils_g(nullptr),fils_d(nullptr),mot(m),occurence(0){}

noeud::~noeud(){
	delete pere;
	delete fils_g;
	delete fils_d;
}