/*#include<iostream>
using namespace std;
int main(){
    int x=10;
    int& ref=x;
    x=20;
    cout<<ref;
    ref=30;
    cout<<x;
}*/
/*
#include<iostream>
using namespace std;
void swap(int& n1,int& n2){
    int t=n1;
    n1=n2;
    n2=t;
}
int main(){
    int a=2,b=3;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
class A{
    int x;
    static int y;
    public:
    A(){
        x=0;
        x++;
        y++;
    }
    void display(){
        cout<<"x ="<<x<<" y ="<<y<<endl;
    }
};
int A::y=0;

int main(){
    A obj1;
    //obj1.display();
    A obj2;
    //obj2.display();
    A obj3;
    //obj3.display();
    obj1.display();
}*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cin >>id;
        cout <<id<<endl;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee obj1, obj2, obj3;
   
    obj1.setData();
    obj1.getData();
    Employee::getCount();
    obj1.getCount();

    //obj2.setData();
    //obj2.getData();
    //Employee::getCount();

    //obj3.setData();
    //obj3.getData();
    //Employee::getCount();

    return 0;
}
