#include<bits/stdc++.h>
using namespace std;
void function(int arr[],int n,int m){
    int large=0;
    for(int i=0;i<n;i++){
        if(arr[large]<arr[i]){
            large=i;
        }
    }
    cout<<"largest element is present at index is "<<large<<endl;
    int m;
    if(m<n){
        cout<<"second largest "<<m+1<<endl;
    }
}
int main(){
    int arr,n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}