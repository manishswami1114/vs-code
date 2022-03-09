#include<bits/stdc++.h>
using namespace std;
void frequency(int *arr,int n){
  int large=arr[0],small=arr[0];
  for(int i=0;i<n;i++){
    if(large<arr[i]){
      large=arr[i];
    }
  }
  for(int i=0;i<n;i++){
    if(small>arr[i]){
      small=arr[i];
    }
  }
  int size=small;
  int pos[large+1]={0};
  if(small<0){
    size=(size*-1)+1;
    int nega[size]={0};
    for(int i=0;i<n;i++){
      if(arr[i]<0){
        nega[arr[i]*-1]++;
      }
      else{
        pos[arr[i]]++;
      }
    }
    int occ1=nega[0],occ2=pos[0],ind1=0,ind2=0;
    for(int i=0;i<size;i++){
      if(occ1<nega[i]){
        occ1=nega[i];
        ind1=i;
      }
    }
    for(int i=0;i<=large;i++){
      if(occ2<pos[i]){
        occ2=pos[i];
        ind2=i;
      }
    }
    if(occ1>occ2){
      cout<<ind1*-1<<" "<<occ1<<endl;
    }
    else if(occ2>occ1){
      cout<<ind2<<" "<<occ2<<endl;
    }
  }
  else{
    for(int i=0;i<n;i++){
      pos[arr[i]]++;
    }
    int occ1=pos[0],ind1=0;
    for(int i=0;i<=large;i++){
      if(occ1<pos[i]){
        occ1=pos[i];
        ind1=i;
      }
    }
    cout<<occ1<<" "<<ind1<<endl;
  }
}
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  frequency(arr,n);
}

/*
#include<bits/stdc++.h>
using namespace std;
void freq(int arr[],int n){
    int largest=arr[0],smallest=arr[0];
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    int small=arr[i];
    

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    freq(arr,n)
}
*/