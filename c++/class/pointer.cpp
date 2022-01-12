#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A();
    //A(int,int);
    void display();

};
A::A(){
    cin>>x;
}
/*A::A(int a,int b){
    x=a;
    y=b;
}*/
void A::display(){
    cout<<x<<endl;
}
int main(){
    A *obj=new A();
    obj->display();
    (*obj).display();
    delete obj;

    A obj1;
    obj1.display();


    return 0;
}
