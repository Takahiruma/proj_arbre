#include<iostream>
#include<fstream>
#include<unordered_map>
#include<string>
#include<exception>

using namespace std;

typedef unordered_map<string, size_t> string_map;

string_map read_file(string file)
{
	ifstream ifs (file);
	string_map nmap; //la table de hashage
	if (ifs)
	{
		string find;
		char c;
		while (ifs.good())
		{
			ifs.get(c);
			find = c;
			nmap[find]+=1;
		}
		return nmap;
	}
	else
		throw runtime_error(file+" : Fichier inconnu");
}