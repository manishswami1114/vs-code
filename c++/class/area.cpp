/*#include<iostream>
using namespace std;
class A{
    int l,w;
    public:

}*/
/*
#include<iostream>
using namespace std;

class rect {
    int l, b;
public:
rect(){}
rect(int x,int y){
    l=x;
    b=y;
}
void area(){
    cout<<l*b;
}


int main() {
    rect obj1,obj2;
    area2=obj1.area(2,8);
    area1=obj2.area(2,4);
    if(area1<=area2){

    }
}*/

#include<iostream>
using namespace std;

class rect {
    int l, b;
public:
rect(){}
rect(int x,int y){
    l=x;
    b=y;
}
void area(){
    cout<<l*b;
}
};
int main(){
    int n,x,y;
    cin>>n;
    rect*a=new rect[n];
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a[i]=rect(x,y);
    }
    for(int i=0;i<n;i++){
        a[i].area();
    }
    rect*b=new rect[n];
    for(int i=0;i<n;i++){
        
    }

}