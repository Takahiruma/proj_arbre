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
				break;
			case 'o':
				break;
			case 'x':
				break;
			default:
				throw invalid_argument("Error : Valid options are : -c (input text file) -o (output file) -x (input hff file)");
		}
		k++;
	}
	if (argc == 1)
	{
		throw invalid_argument("Error : no parameters. Valid options are : -c (input text file) -o (output file) -x (input hff file)");
	}
	struct param p;
	p.value = s;
	p.copt = i;
	p.length = k;
	return p;
}