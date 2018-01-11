#include<unistd.h>
#include<string>
#include<exception>


struct param{
	int length;
	string * value;
	int * copt;
};

param eval_param(int argc,char * argv[])
{
	int opt;
	string * s = new string[argc];
	int * i = new int [argc];
	int k = 0;
	while ((opt = getopt(argc,argv,"c:o:x:"))!=-1)
	{
		i[k] = opt;
		s[k] = optarg;
		switch(opt)
		{
			case 'c':
				cout << optarg;
				break;
			case 'o':
				cout << optarg;
				break;
			case 'x':
				cout << optarg;
				break;
			default:
				throw invalid_argument("Valid options are : -c (input text file) -o (output file) -x (input hff file)");
		}
		k++;
	}
	if (optind >= argc)
	{
		throw invalid_argument("Valid options are : -c (input text file) -o (output file) -x (input hff file)");
	}
	struct param p;
	p.value = s;
	p.copt = i;
	p.length = k;
	return p;
}