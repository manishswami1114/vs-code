#include<iostream>
using namespace std;
class vehicle{
    public:
    int wheel;
    vehicle(){
        wheel=0;
    }
    vehicle(int w){
        wheel=w;
    }

};
int main(){
    vehicle v,x;
    vehicle u(4);
    cout<<v.wheel<<u.wheel;
    return 0;
    }
