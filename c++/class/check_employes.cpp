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
   // Statement
    obj1.setData();
    obj1.getData();
    Employee::getCount();

    obj2.setData();
    obj2.getData();
    Employee::getCount();

    obj3.setData();
    obj3.getData();
    Employee::getCount();

    return 0;
}
