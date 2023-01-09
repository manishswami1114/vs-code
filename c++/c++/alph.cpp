#include<iostream>
using namespace std;
int main()
{
 int x=30, *y, *z;
 y=&x;     /* Assume address of x is 1000 and integer is 4 byte size */
 z=y;
 *y++=*z++;
 x++;
 cout<<x<<" "<<y<<" "<<z;
 return 0;
}