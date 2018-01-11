#include<iostream>
#include<fstream>
#include<unordered_map>
#include<string>
#include<exceptions>

using namespace std;

typedef unordered_map<string, size_t> string_map;

string_map readFile(string file)
{
	ifstream ifs (file);
	string_map nmap; //la table de hashage
	if (ifs)
	{
		string find;
		while (ifs.good())
		{
			ifs >> find;
			nmap[find]+=1;
		}
		return nmap;
	}
	else
		throw runtime_error(file+" : Fichier inconnu");
}