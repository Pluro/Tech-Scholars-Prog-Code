#include <iostream>
#include<iomanip>
#include <map>
#include<fstream>
#include <string.h>
using namespace std;
#define FILENAME_MAX 301
typedef map<string, int> MapType;
class wSel {
	private:
		char* wCurrent;
		string lCurrent;
	public:
		void readLine (string lNext){
			lCurrent = lNext;
			char p[lCurrent.length()];
  			int i;
    		for (i = 0; i < sizeof(p); i++) {
        	wCurrent[i] = lCurrent[i];
			}
		}
		char* get_word(){return wCurrent;}
};
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
	MapType m;
	string line = "error";
	while (getline(ifile, line,' ')){
		wSel word;
		word.readLine(line);
		char* wCount = strtok(word.get_word(), " ");
		while (wCount != NULL) {
			++m[wCount];
			wCount = strtok(NULL, " ");
		}
	}
	
	for (MapType::iterator iter = m.begin(); iter != m.end(); ++iter) {
			cout << iter->first << " occurred " << iter->second << " times.\n";
		}
	return 0;
}
