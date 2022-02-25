#include<iostream>
using namespace std;
int f(int x ,int y){
    return x+y;
}
int f2(int x,int y){
    return x*y;
}
int f3(int x,int y){
    return x/y;
}
int f4(int x,int y){
    return x-y;
}
int f5(int x,int y){
    return x%y;
}
int main(){
    int i,j;
    cin>>i>>j;
    cout<<"sum="<<f(i,j)<<endl;
    cout<<"pro="<<f2(i,j)<<endl;
    cout<<"div"<<f3(i,j)<<endl;
    cout<<"diff="<<f4(i,j)<<endl;
    cout<<"que="<<f5(i,j)<<endl;
    return 0;
}