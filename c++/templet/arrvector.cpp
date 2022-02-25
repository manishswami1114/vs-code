#include<iostream> 
#include<vector>
using namespace std;
int main(){
    int a[]={10,20,30};
    int s=sizeof(a)/sizeof(int);
    vector<int> v(a,a+s);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}