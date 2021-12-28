// class is  templete consisting  data and member function by default the data are private(data exess can not acced directly in the main) data member are acces by the member function ,hence member function are public memory is not allocteed for the class .memory is allocted for the object//
//each and every object will have a separate copy of the data member// 
#include<iostream>
using namespace std;

class A
{
    int x;
    public:
    void setx(){
        cin>>x;
    }
    void getx(){
        cout<<x<<endl;
    }
};
int main(){
    A obj1;
    obj1.setx();
    obj1.getx();

    A obj2;
    obj2.setx();
    obj2.getx();
    return 0;

}

