#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){
	list<int>iList={1,2,3,4};
	list<string>sList;
	sList.push_back("Able");
	sList.push_front("Baker");
	list<string>::iterator iter=sList.begin();
	for (;iter!=sList.end();++iter) {
		cout<<*iter<<endl;
	}//new feature in c++14 for (auto x: sList) std::cout << "some bullshit" << '\n';
}
