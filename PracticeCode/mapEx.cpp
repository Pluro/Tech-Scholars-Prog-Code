#include <map>
#include<string>
#include<iterator>
#include<iostream>
using namespace std;
int main(){
	map<string, int>mapOfWords;
	mapOfWords.insert(std::make_pair("Apple",1));
	mapOfWords.insert(std::make_pair("Orange",2));
	mapOfWords["Pear"]=3;
	mapOfWords["Apple"]=4;//overwirte value

	map<string, int>::iterator it = mapOfWords.begin();
	while (it != mapOfWords.end()) {
		cout<<it->first<<"::"<<it->second<<endl;
		it++;
	}
	if(mapOfWords.insert(make_pair("Apple",1)).second==false){
		cout<<"Element whit key 'Apple' not inserted because already exists "<<endl;
	}
	mapOfWords.erase("Apple");
	//searching element in map by key
	if(mapOfWords.find("Orange")!=mapOfWords.end()){
		std::cout << "word 'Orange' found" << '\n';
	}
	if(mapOfWords.find("Apple")==mapOfWords.end()){
	std::cout << "word 'Apple' not found" << '\n';
	}
	return 0;
}
