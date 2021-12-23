#include<iostream>
using namespace std;
int  check(int a,int b,int c)
{
    int tem=a;
    a=b;
    b=c;
    c=tem;
    cout<<a<<b<<c;
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    check(x,y,z);
    return 0;
}