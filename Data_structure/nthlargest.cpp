#include<bits/stdc++.h>
using namespace std;
void largest(int *arr,int n, int m){
  int large = arr[0];
  for(int i=0;i<n;i++){
    if(large<arr[i]){
      large=arr[i];
    }
  }
  int fre[large+1]={0}; 
  for(int i=0;i<n;i++){
    fre[arr[i]]++;
  }
  int count = large-m+1;
  int index,i;
  for(i=large;i>=count;i--){
    if(fre[i]!=0){
      index = i;
    }
    else{
      count=count-1;
    }
  }
  cout<<index<<endl;
}
int main(){
  int n,m;
  cin>>n>>m;
  int arr[n];
  for(int i = 0;i<n;i++){
    cin>>arr[i];
  }
  largest(arr,n,m);
}