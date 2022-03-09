#include<bits/stdc++.h>
using namespace std;
int binarySearch(int array[], int x, int low, int high) {
  
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int x;
    cin>>x;
    cout<<binarySearch(array,x,0,n - 1);
}