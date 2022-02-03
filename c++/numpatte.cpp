#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i)
                printf("1");
            else
                printf("");
        }
        printf("\n");
    }
    return 0;
}