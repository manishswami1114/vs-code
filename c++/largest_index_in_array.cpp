#include<iostream>
using namespace std;
void maxi(int arr[],int n){
    int large=arr[0];
    for(int i=0;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    cout<<large<<endl;
    int arr1[large+1]={0};
    for(int i=0;i<n;i++){
        arr1[arr[i]]++;
    }
    int lar=arr1[0],index=0;
    for(int i=0;i<=large;i++){
        if(lar<arr1[i]){
            lar=arr1[i];
            index=i;
        }
    }
    cout<<index<<" "<<lar<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    maxi(arr,n);
    return 0;
}