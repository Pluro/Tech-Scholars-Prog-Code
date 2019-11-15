#include <iostream>
#include<fstream>
#include <string>
using namespace std;
#define FILENAME_MAX 301
int main(){
	char filename[FILENAME_MAX];
	cout <<"enter a file name and press enter: ";
	cin.getline(filename, FILENAME_MAX);
	ifstream file_in;
	file_in.open(filename);
	if (!file_in){
		cout << filename<<" could not be opened." << '\n';
		return -1;
	}
	//display lines one by once
	string str;
		int i=1;
			while (getline(file_in,str)&& i<=3){//remove the && condition if you want to have the full text file
				cout<<str<<"\n";
				i++;
			}
	return 0;
}
