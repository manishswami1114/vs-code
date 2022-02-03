#include<iostream>
using namespace std;
int main()
{
    int n,temp,r;
    int rev=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(n==rev)
    cout<<n<<"is a palindrom no"<<endl;
    else
    cout<<n<<"is not a palindrom no"<<endl;

return 0;
}
