#include<iostream>
using namespace std;


class Myrectangle{
    int l,b;
    public:
    float Myrectangle:: accept(){
        cin>>l>>b;
    }
    float Myrectangle:: getarea(){
        cout<<2*(l+b)<<endl;
    }
    
};
int main(){
    Myrectangle obj1;
    cout<<obj1.accept();
    cout<<obj1.getarea();
    return 0;
}