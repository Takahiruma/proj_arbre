#ifndef NOEUD_HPP
#define NOEUD_HPP
#include <string>

class noeud{
	private:
	noeud* pere;
	noeud* fils_g;
	noeud* fils_d;
	std::string mot;
	size_t occurence;
	
	public:
	noeud(std::string m, noeud* p=nullptr);
	~noeud();
	
	inline noeud* get_pere()const{return pere;}
	inline void set_pere(noeud* p){pere=p;}
	
	inline noeud* get_gauche()const{return fils_g;}
	inline void set_gauche(noeud* g){fils_g=g;}
	
	inline noeud* get_droite()const{return fils_d;}
	inline void set_droite(noeud* d){fils_d=d;}
	
	inline std::string get_mot()const{return mot;}
	inline void set_mot(std::string m){mot=m;}
	
	inline size_t get_occurence()const{return occurence;}
	inline void set_occurence(size_t o){occurence=o;}
};
#endif