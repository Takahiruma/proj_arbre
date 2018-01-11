//#include "noeud.hpp"
//#include "arbre.hpp"
#include "unmap.cpp"
#include <unistd.h>

int main(int argc, char* argv[])
{
	int opt;
	while ((opt = getopt(argc,argv,"c:o:"))!=-1)
	{
		switch(opt)
		{
			case 'c':
				cout << optarg;
				break;
			default:
				cerr << opt;
				cerr << optarg;
		}
	}
	return 0;
}
