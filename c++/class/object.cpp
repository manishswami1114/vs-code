#include<iostream>
using namespace std;
class a{
    int x;
    public:
    a(){
        cin>>x;
    }
    void display(){
        cout<<x<<endl;
    }
};
int main(){
    a obj;
    obj.display();
}