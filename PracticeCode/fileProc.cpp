#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main(void) {
	char filename[301];
	cout << "Enter a file name and press ENTER: ";
	cin.getline(filename, 301); //Extracts characters from the stream and stores them into s as a c-string
	ofstream ofile;
	ofile.open(filename);
	if (!ofile.is_open()) {
		cout << filename << " could not be opened.";
		cout << endl;
	}else{
	cout << filename << " was opened." << endl;
	ofile << "I read the" << endl;
	ofile << "news today," << endl;
	ofile << "ooh boy.";
	ofile.close();
}
return 0; }
