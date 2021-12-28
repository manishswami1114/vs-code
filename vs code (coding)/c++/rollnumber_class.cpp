#include <iostream>
using namespace std;

class student
{
    char rollno[11];
    char name[100];
    float m1;
    float m2;
    float m3;
    float avg;

public:
    void accept()
    {
        cin >> rollno;
        cin.get();
        cin.getline(name, 100);
        cin.get();
        cin >> m1;
        cin >> m2;
        cin >> m3;
        float avg = (m1 + m2 + m3) / 3;
    }
    void display()
    {
        cout << name << endl;
        cout << avg << endl;
    }
};
int main()
{
    student obj1;
    obj1.accept();
    obj1.display();
    return 0;
}