#include <iostream>
#include<iomanip>
#include <list>
#include <map>
#include<fstream>
#include <string>
#include <string.h>
using namespace std;
#define FILENAME_MAX 301
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
	char delim[] = " ";
	char str[line.size()];
    MapType m;
	char *ptr = strtok(str, delim);
	while (getline(ifile, line)){
		int i;
	    for (i = 0; i < sizeof(line); i++) {
	        line[i] = str[i];
	    }
		while (ptr != NULL){
			++m[ptr];
            ptr = strtok(NULL, delim);
		}
    	for (MapType::iterator iter = m.begin(); iter != m.end(); ++iter) {
        	cout << iter->first << " occurred " << iter->second << " times.\n";
		}
	}
}
