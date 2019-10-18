#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string userIn;
    cout << "enter a message: "<<endl;
    getline(cin, userIn);
    int len = userIn.size();
    char userMess = userIn.at(len-1);
    for (len >= 0; len--;) {
        cout<< userMess;
        userMess = userIn.at(len-1);
    }
    return 0;
}
