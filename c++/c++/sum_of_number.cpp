#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n; for (; n != 0; n = n / 10)
            sum = sum + n % 10;
    cout << sum << endl;
    return 0;
}
