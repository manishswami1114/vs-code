#include<iostream>
using namespace std;
int main(){
    int p=10;
    //cin>>p;
    *ptr= new int[5];
    int i;
    for(i=0;i<5;i++)
        cin>>*(ptr+i);
    
    for(i=0;i<3;i++)
        cout<<*(ptr+i)<<" ";
    
    
    delete[] ptr;
    return 0;
}