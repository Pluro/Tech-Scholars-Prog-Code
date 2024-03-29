#include <iostream>
#include<iomanip>
#include <list>
#include <string.h>
#include <map>
using namespace std;
typedef map<string, int> MapType;
int main(){
	char str[] = "Test the word counting using the template";
	MapType m;
	int len = strlen(str);
	char delim[] = " ";
	char *ptr = strtok(str, delim);
	while (ptr != NULL) {
		cout<<ptr<<endl;
		++m[ptr];
		ptr = strtok(NULL, delim);
	}
	for (MapType::iterator iter = m.begin(); iter != m.end(); ++iter) {
		cout << iter->first << " occurred " << iter->second << " times.\n";
	}
return 0;
}
