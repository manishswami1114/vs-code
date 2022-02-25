#include <iostream>
using namespace std;
class Mycircle
{
    float x;

public:
    void setx()
    {
        cin >> x;
    }
    void getarea()
    {
        cout << 3.14 *(x*x);
    }
    void getcir()
    {
        cout << 2 * 3.14 * x;
    }
};
int main()
{
    Mycircle obj1;
    obj1.setx();
    obj1.getarea();
    obj1.getcir();
    return 0;
}