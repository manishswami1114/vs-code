#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
    T result = a+b;
    return result;
}
int main(){
     int j =2;
     int i=3;
     float s=2.4;
     float w=3.4;
     cout<<add(i,j)<<" ";
     cout<<add(s,w);
}