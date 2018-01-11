#include<unistd.h>
#include<string>
#include<exception>


string* eval_param(int argc,char * argv[])
{
	int opt;
	while ((opt = getopt(argc,argv,"c:o:"))!=-1)
	{
		switch(opt)
		{
			case 'c':
				cout << optarg;
				break;
			case 'o':
				cout << optarg;
				break;
			default:
				throw invalid_argument("Valid options are : -c (textfile) -o (hff file)");
		}
	}
	return nullptr;
}