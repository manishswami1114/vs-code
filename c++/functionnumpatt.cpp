#include <iostream>
using namespace std;
void p1(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<j;
        }
        cout << endl;
    }
}
void p2(int y)
{
    for (int i = y; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<j;
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