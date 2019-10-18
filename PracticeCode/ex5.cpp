#include <iostream>
using namespace std;
int boolIsPrime(int n){
    if (n%2 > 0){
        if(n%3>0){
            cout<< "number is prime";
            return 0;
        }
    }else{
        cout<< "number is not prime";
    }
    return 0;
}

int main(int argc, char const *argv[]) {
    int n = 0;
    cout<< "enter a number: "<<endl;
    cin>> n;
    boolIsPrime(n);
    return 0;
}
