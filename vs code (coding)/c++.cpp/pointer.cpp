#include<iostream>
using namespace std;
int main(){
    int x=10,y,z,*p;
    p=&x;
    y=*p;
    cout<<&x<<" "<<&p<<" "<<p<<endl;
    cout<<x<<" "<<y<<" "<<*p<<endl;
    ++*p;
    cout<<x<<" "<<y<<" "<<*p<<endl;
    z=x+y+*p;
    p=&z;
    ++p;
    cout<<x<<" "<<z<<" "<<*p<<endl;
    p=&y;
    x=*p**p;
    cout<<x<<" "<<*p<<endl;

} 