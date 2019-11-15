#include <iostream>
#include<iomanip>
#include <list>
#include <fstream>
#include <string.h>
#include <map>
#include<bits/stdc++.h>
#define FILENAME_MAX 301
using namespace std;
typedef map<string, int> MapType;
int main(){
	char filename[FILENAME_MAX];
	cout <<"enter a file name and press enter: ";
	cin.getline(filename, FILENAME_MAX);
	ifstream ifile;
	ifile.open(filename);
	if (!ifile){
		cout << filename<<" could not be opened." << '\n';
		return -1;
	}
	string line;
	MapType m;
	while(getline(ifile, line)){
		string cLine = line;
		int len = cLine.length();
		char str[cLine.length()+1];
		for (int i = 0; i < len; i++) {
			if(ispunct(cLine[i])){
				cLine.erase(i--,1);
				len = cLine.length();
			}
			if (!isalpha(cLine[i])){
				cLine.erase(i--,1);
				len = cLine.length();
			}
			transform(cLine.begin(), cLine.end(), cLine.begin(), ::tolower);
			str[i] = cLine[i];
		}
	char delim[] = " ";
	char *ptr = strtok(str, delim);
	while (ptr != NULL) {
		++m[ptr];
		ptr = strtok(NULL, delim);
	}
}
for (MapType::iterator iter = m.begin(); iter != m.end(); ++iter) {
	cout << iter->first << " occurred " << iter->second << " times.\n";
}
return 0;
}
