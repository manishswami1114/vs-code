#include <iostream>
using namespace std;
int main()
{
    int n, flag = 0;
    cin >> n;
    int i=2;
    while (i<=n/2;i++)
    {
    
    (i=2;i <= n / 2; )
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag==1)
    cout<<n<<"is a not prime no"<<endl;
    else
    cout<<n<<"is  a prime no"<<endl;
    return 0;
}