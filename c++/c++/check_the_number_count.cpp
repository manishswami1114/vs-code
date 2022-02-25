#include <iostream>
using namespace std;
int linear(int arr[], int n, int x)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            num = num + 1;
        }
    }
    return num;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    cout << linear(arr, n, x) << endl;

    return 0;
}