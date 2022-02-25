#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        int flag=1,i=2;
        while(i<=n/2){
            if(n%i==0);
            {
                flag=0;
                break;

            }
            i++;
        }
        if(flag==1){
        cout<<n<<"is a prime no"<<endl;}
        else{
        cout<<n<<"is not a prime number"<<endl;}
    }
    t--;
    }