#include<iostream>
using namespace std;
void twoarray(int array1[],int array2[],int n,int m,int array3[]){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(array1[i]<array2[j]){
            array3[k]=array1[i];
            i++;
            k++;
        }
        else{
            array3[k]=array2[j];
            j++;
            k++;
        }
    }
    while(i<n){
        array3[k]=array1[i];
        k++;
        i++;
    }
    while(j<m){
        array3[k]=array2[j];
        j++;
        k++;
        
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int array1[n],array2[m];
    for(int i=0;i<n;i++){
        cin>>array1[i];
    }
    
    for(int i=0;i<m;i++){
        cin>>array2[i];
    }
    int array3[n+m];
    twoarray(array1,array2,n,m,array3);
    for(int i=0;i<n+m;i++){
        cout<<array3[i]<<" ";
    }
    cout<<endl;

    return 0;
}