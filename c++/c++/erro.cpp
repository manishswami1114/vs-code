#include<iostream>
using namespace std;
int main(){
    int n,s=0,l;
    cin>>n;
    l=n%10;
    while(n!=0){
        if(n/10==0){
            s=n;
        }
        n=n/10;
    }
    cout<<s+l<<endl;
    return 0;
}

row end||