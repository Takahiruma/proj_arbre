#include "arbre.hpp"

arbre::arbre(std::string n, noeud* r):root(r){}

arbre::~arbre(){
	delete root->get_gauche();
	delete root->get_droite();
	delete root;
}
noeud arbre::trouve_noeud(std::string s, noeud* n){
	noeud* ad= nullptr;
	
	if(n->get_mot() == s)
		ad=n;
	else if (n->get_mot() < s)
		ad=trouve_noeud(s,n->get_gauche());
	else
		ad=trouve_noeud(s,n->get_droite());
	return *ad;
}

void arbre::inserer_noeud(noeud* nvnoeud, noeud* noeud){
	if (IsEmpty(noeud))
		noeud = nvnoeud;
	else
	{
		nvnoeud.set_parent(noeud);
		if (nvnoeud->get_occurence() > noeud->get_occurence())
			inserer_noeud(nvnoeud,noeud->get_gauche());
		else
			inserer_noeud(nvnoeud,noeud->get_droite());
	}
}