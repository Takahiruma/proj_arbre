#include "noeud.hpp"
#include "arbre.hpp"
#include "unmap.cpp"
#include "evalparam.cpp"

int main(int argc, char* argv[])
{
	try
	{
		struct param p = eval_param(argc,argv);
		string_map sm;
		for (int i = 0; i < p.length;i++)
		{
			switch(p.copt[i])
			{
				case 'c':
					sm = read_file(p.value[i]);
					cout << sm["e"];
					break;
				case 'o':
					cout <<"a";
					break;
			}
		}
	}
	catch(exception &e)
	{
		cerr << e.what() <<endl;
	}
	return 0;
}
