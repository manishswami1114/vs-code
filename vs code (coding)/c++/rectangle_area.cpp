#include<iostream>
using namespace std;


class Myrectangle{
    int l,b;
    public:
    void accept(){
        cin>>l>>b;
    }
    void getarea(){
        cout<<2*(l+b)<<endl;
    }
    
};
int main(){
    Myrectangle obj1;
    obj1.accept();
    obj1.getarea();
    return 0;
}