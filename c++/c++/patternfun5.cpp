#include <iostream>
using namespace std;
void p1(int x)
{
    int num = 1;
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++;
        }
        cout << endl;
    }
}
void p2(int y)
{
    for (int i = y; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "1";
        }
        cout << endl;
    }
}
int main()
{
    int n, x, y;
    cin >> n;
    x = (n / 2 + 1);
    y = n - x;
    p1(x);
    p2(y);
    return 0;
}