#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char filename[301];
	cout << "enter a file name and press ENTER" << '\n';
	cin.getline(filename,301);
	ofstream file_out;
	file_out.open(filename);
	if(! file_out){
		cout<<filename<<" could not be opened.";
		cout<<endl;
		return -1;
	}
	cout << filename<<" was opened." << '\n';
	file_out<<"I read the "<<endl;
	file_out<<"news today,"<<endl;
	file_out<<"ooh boy.";
	file_out.close();
	return 0;
}
