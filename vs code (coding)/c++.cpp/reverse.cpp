#include<iostream>
using namespace std;
void f(int n)
{
    int z=n;
    int rev=0;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(z==rev);
    {
        cout<<"is a palindrom nom"<<endl;
    }
    else{
        cout<<"is no a palindrom"<<endl;
    }
}
int main(){
    int x;
    cin>>x;
    return 0;
}