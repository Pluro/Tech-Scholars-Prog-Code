#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
#include <map>
using namespace std;
#define FILENAME_MAX 301
typedef map<string,int>word;
int main() {
	char filename[FILENAME_MAX];
	cout <<"enter a file name and press enter: ";
	cin.getline(filename, FILENAME_MAX);
	ifstream file_in;
	file_in.open(filename);
	if (!file_in){
		cout << filename<<" could not be opened." << '\n';
		return -1;
	}
	int x = 0;
	char str[] = getline(file_in);
	int len = strlen(str);
	
	char delim[] = " ";
	char *ptr = strtok(str, delim);
	while (!file_in.eof()) {
		while (){
		x++;
	}
	word.insert(std::make_pair("ptr",x));
	ptr = strtok(NULL, delim);
	}
	for (MapType::iterator iter = word.begin(); iter != word.end(); ++iter) {
	cout << iter->first << " occurred " << iter->second << " times.\n"; 	return 0;
}
