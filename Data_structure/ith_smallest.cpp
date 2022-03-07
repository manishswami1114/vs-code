#include <iostream>
using namespace std;

int large(int a[], int n){
    int max=a[0];
    int max_i=0;
    for(int i=0; i<n; i++){
        if(max<a[i]){
            max=a[i];
            max_i=i;
        }
        
    }
    return max_i;

}

int freq_fun(int a[], int n, int m){
    int size=large(a,n)+1;
    int freq[size]={0};
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }

    int count=1;
    for(int i=0;i<size; i++){
        if(freq[i]!=0){
            if(count==m){
            return i;
            }
            else{
                count++;
            }
        }
    }
}

int main(){
    int n,i;
    cin>>n>>i;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int small=freq_fun(a,n,i);
    cout<<small<<endl;
}