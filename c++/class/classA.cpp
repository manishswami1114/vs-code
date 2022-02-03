#include<iostream>
using namespace std;
class A{
    int x;
    int y;
    public:
    A();
    int getx();
    int gety();
};
A::A(){
    cin>>x>>y;
}
int A::getx(){
    return x;
}
int A::gety(){
    return y;
}
class B:public A{   //private A
    int z;
    public:
    B();
    void  display();
};
B::B(){
    cin>>z;
}
void B::display(){
    cout<<getx()+gety()+z;
};
int main(){
    B obj;
    obj.display();
    return 0;

}