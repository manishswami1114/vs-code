#include <iostream>
using namespace std;
int main()
{
    int d,nd;
    cin >> d >> nd;
    int day = (d + nd) % 7;
    if (day = 0)
        cout << "sunday" << endl;
    else if (day == 1)
        cout << "monday" << endl;
    else if (day == 2)
        cout << "tuesday" << endl;
    else if (day == 3)
        cout << "wednesday" << endl;
    else if (day == 4)
        cout << "thruesday" << endl;
    else if (day == 5)
        cout << "friday" << endl;
    else if (day == 6)
        cout << "saturday" << endl;
    else
        cout << "its invalide" << endl;
    return 0;
}
