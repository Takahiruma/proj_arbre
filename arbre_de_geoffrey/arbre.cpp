#include "arbre.hpp"

arbre::arbre(std::string n, noeud* r):root(r){}

arbre::~arbre(){
	delete root->get_gauche();
	delete root->get_droite();
	delete root;
}
noeud arbre::trouve_noeud(std::string s, noeud* n){
	noeud* ad= new noeud (s,nullptr);
	ad=nullptr;
	
	
	
	return *ad;
}

// void arbre::inserer_noeud(noeud* n){
	// if (isEmpty(root))
		// root= new noeud(n);
	// else
		// if(n->get_mot() < root->get_mot()){
			// if(n->
		// }
			
// }