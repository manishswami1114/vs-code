#include<iostream>
using namespace std;
void f(int *p){
    *p=100;
}
int main(){
    int x=10;
    f(&x);
    cout<<x<<endl;
}