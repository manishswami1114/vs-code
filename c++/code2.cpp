#include <iostream>
using namespace std;
int sum(int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, n;
        cin >> d >> n;
        while (d > 0)
        {
            n = sum(n);
            d--;
        }
        cout << n << endl;
    }
    return 0;
}
