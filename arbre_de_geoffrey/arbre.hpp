#include "noeud.hpp"
class arbre{
	private:
	noeud* root;
	
	public:
	
	arbre(std::string n, noeud* r);
	~arbre();
	noeud trouve_noeud(noeud* nvnoeud, noeud* noeud);
	void inserer_noeud(noeud* n);
	
	inline noeud& get_root()const{return *root;}
	inline void set_root(noeud* r){root=r;}
	
	
	inline bool IsEmpty(noeud* n)const{bool is=true;if(n==nullptr);is=false;return is; }
	inline bool isRoot(noeud* n)const{bool is=true;if(n->get_pere()==nullptr);is=false;return is; }
	inline bool isExtern(noeud* n)const{bool is=true;if(n->get_gauche()==nullptr && n->get_droite()==nullptr);is=false;return is; }
	inline bool isIntern(noeud* n)const{bool is=true;if(n->get_gauche()!=nullptr && n->get_droite()!=nullptr);is=false;return is; }

};