#include <iostream>
using namespace std;
void sort(int n);
void swap(int *p1, int *p2);
int a[10];
int main() {
	int i ;
	for (i = 0; i < 10; i++) {
		cout << "enter array element #" << i<<": ";
		cin>>a[i];
	}
	sort(10);
	cout<<"here is the array, sorted: "<<endl;
	for (i = 0; i < 10; i++) {
		cout<<a[i]<<" ";
	}
	return 0;
}
//swap the values pointed to by p1 and p2
void swap(int *p1, int *p2) {
	int temp =*p1;
	*p1=*p2;
	*p2 = temp;
}
//sort function: sort array named a with n elements
void sort(int n){
	int i, j, low;
	for (i = 0; i < n-1; i++) {
		/*this part of the loop finds the lowest element 3
		in the range i to n-1. The index is set to the
		varibale named low*/
	low = i;
	for (j = i + 1; j < n; j++) {
		if (a[j]<a[low]) {
			low = j;
			//the part of the loop preforms a swap if needed
			if(i != low){
				swap(&a[i], &a[low]);
				}
			}
		}
	}
}
