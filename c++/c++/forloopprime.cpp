#include <iostream>
using namespace std;
int main()
{
    int n, i, flag = 0;
    cin >> n;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 1)
        cout << n << "is a  prime no" << endl;
    else
        cout << n << "is a not prime no" << endl;
return 0;
}