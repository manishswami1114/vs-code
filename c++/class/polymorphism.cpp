// C++ program for function overriding

#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    /*virtual*/ void print()
    {
        cout << "print base class" << endl;
    }

    void show()
    {
        cout << "show base class" << endl;
    }
};

class derived : public base
{
public:
    void print() // print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
    {
        cout << "print derived class" << endl;
    }

    void show()
    {
        cout << "show derived class" << endl;
    }
};

// main function
int main()
{
    derived *bptr;
    derived d;
    bptr = &d;

    // virtual function, binded at runtime (Runtime polymorphism)
    bptr->show();

    // Non-virtual function, binded at compile time
    bptr->print();

    return 0;
}
