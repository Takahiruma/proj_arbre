#include "noeud.hpp"
#include "arbre.hpp"
#include "unmap.cpp"
#include "evalparam.cpp"

int main(int argc, char* argv[])
{
	try
	{
		struct param p = eval_param(argc,argv);
		for (int i = 0; i < p.length;i++)
		{
			switch(p.copt[i])
			{
				case 'c':
					// string_map sm = read_file(p.value[i]);
					break;
				case 'o':
					cout <<"a";
					break;
			}
		}
	}
	catch(exception e)
	{
		e.what();
	}
	return 0;
}
