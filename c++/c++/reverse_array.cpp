#include<iostream>
using namespace std;
int main(){
    int n,i,temp;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    
    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
        }
        cout<<endl;
        return 0;

}