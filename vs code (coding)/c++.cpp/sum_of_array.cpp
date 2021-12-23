#include<iostream>
using namespace std;
int  fun(int p[],int n){
    int sum=0;
    int large=p[0];
    int l=0;
    for(int i=0;i<n;i++){
        //sum+=p[i];//
        if(large<p[i]){
            large=p[i];
            l=i;
        }
    }
    cout<<l<<endl;
    return large;
    //int avg=sum/n;//
    //return avg;// 
    //return sum;//
}
    int main(){
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    fun(p,n);
    cout<<fun(p,n)<<endl;
}