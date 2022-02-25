#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[];
    for(int i=n-1;i<n;i++)//to print the array//
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}