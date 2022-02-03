#include<iostream>
using namespace std;
int frequency(int arr1[],int n){
    int max_count=0,ans=arr1[0];
    for(int i=0;i<n;i++){
        int ele=arr1[i],count=0;
        for(int j=0;j<n;j++){
            if(arr1[j]==ele){
                count+=1;
            }
        }
        if(count>max_count){
            ans=ele;
            max_count=count;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<frequency(arr1,n);
    return 0;
}