#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    void accept();
    void display();
};
void A:: accept(){
    cin>>x>>y;
};
void A:: display(){
    cout<<2*(x+y)<<endl;
}
int main(){
    A obj1;
    obj1.accept();
    obj1.display();
}