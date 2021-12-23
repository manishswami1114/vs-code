#include<iostream>
using namespace std;
void array(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>min){
            min=arr[i];
            int index=i;
        }
        }
return index;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    cout<<array(arr,n)<<endl;
    return 0;
}