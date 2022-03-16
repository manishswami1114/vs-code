#include<bits/stdc++.h>
using namespace std;
void Radix_sort(int *arr,int n){
    int large=arr[0],count=0;
    for(int i=1;i<n;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    while(large!=0){
        count++;
        large=large/10;
    }
    for(int i=0;i<=count;i++){
        int arr1[n][10]={0};
        for(int j=0;j<n;j++){
            int index=arr[j]/pow(10,i);
            index=index%10;
            arr1[j][index]=arr[j];
        }
        int k=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<n;j++){
               if(arr1[j][i]!=0){
                   arr[k++]=arr1[j][i];
               }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Radix_sort(arr,n);
    cout<<"😅😅😅😅😅"<<endl;
}