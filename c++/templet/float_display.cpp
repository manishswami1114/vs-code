#include<iostream>
using namespace std;
template<class T,class A>
void add(T a,A b)
{
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
}
int main(){
     add(15,12.3);
     add(15.2,12);
     add("a","abc");
}