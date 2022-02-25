#include<iostream>
using namespace std;
class Rectangle{
    int width, height;
    public:
    void set_values(int,int);
    int area() {return width*height;}

};
void Rectangle::set_values (int x,int y) {
    width = x;
    height = y;

}
int main(){
    Rectangle recta,rectb;
    recta.set_values(3,4);
    rectb.set_values(5,6);
    cout<<"recta area: "<<recta.area()<<endl;
    cout<<"rectb area: "<<rectb.area()<<endl;
    return 0;
}