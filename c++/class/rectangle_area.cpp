#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    A();
    A(int,int);
    A(int);
    void display();

};
A::A(){
    cin>>x>>y;
}
A::A(int a,int b){
    x=a;
    y=b;
}
A::A(int l){
    x=l;
    y=l;
}
void A::display(){
    cout<<x*y<<endl;
}
int main(){
    A obj1;
    obj1.display();

    A obj2;
    obj2.display();

    A obj3;
    obj3.display();

    return 0;
}
