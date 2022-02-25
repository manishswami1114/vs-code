#include<iostream>
using namespace std;

class circle {
private:
    float r, area;
public:
    void input() {
        cin >> r;

    }

    void findArea() {
        area = 3.14 * r * r;
    }

    void display() {
        cout << "Area of circle is:" << area<<endl;
    }
    float circle::circum(){
        return 2*3.14*r;
    }
};

int main() {

    circle obj1,obj2;

    obj1.input();
    obj1.findArea();
    obj1.display();
    cout<<obj1.circum();
    obj2.input();
    obj2.findArea();
    obj2.display();
    cout<<obj2.circum();

    return 0;
}