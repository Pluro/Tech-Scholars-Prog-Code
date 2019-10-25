#include <iostream>
using namespace std;
class Point {
    private:
	    int x, y;
    public:
	    void set(int new_x, int new_y) {
	    	x = new_x;
	    	y = new_y;
	    }
	int get_x(){return x;}
	int get_y(){return y;}
};
int main(){
	Point pt1, pt2;
	pt1.set(10,20);
	cout <<"pt1 i s ("<<pt1.get_x()<<","<<pt1.get_y()<<")"<<endl;
	pt2.set(-5,-25);
	cout <<"pt2 is ("<<pt2.get_x()<<","<<pt2.get_y()<<")"<<endl;

return 0;
}
