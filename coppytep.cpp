#include<iostream>

using namespace std;

#include<fstream>

main()
{
	ifstream file;
	ofstream file1 ("PTIT.out");
	file.open("PTIT.in");
	string s;
	getline(file,s);
	file1 << s;
	file.close();
}
