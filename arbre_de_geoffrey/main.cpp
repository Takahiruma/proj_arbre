//#include "noeud.hpp"
//#include "arbre.hpp"
#include "unmap.cpp"
#include "evalparam.cpp"

int main(int argc, char* argv[])
{
	try
	{
		eval_param(argc,argv);
	}
	catch(exception e)
	{
		e.what();
	}
	return 0;
}
