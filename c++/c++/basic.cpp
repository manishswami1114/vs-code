
#include <iostream>
using namespace std;
int x;                // Global variable declared
int main()
{
    x=10;                 // Initialized once
    cout <<"first value of x = "<< x;
    x=20;                 // Initialized again
    cout <<"Initialized again with value = "<< x;


//#include <iostream>
//using namespace std;//

//int main()
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short int : " << sizeof(short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(long double) << endl;
   cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
   
   return 0;

   int a;
    cout << "Please enter a no between 1 and 5: " << endl; cin >> a;
    
    switch(a)
    {
    case 1:
    cout << "You chose One" << endl; 
    break;
    
    case 2:
    cout << "You chose Two" << endl; 
    break;

    case 3:
    cout << "You chose Three" << endl; 
    break;

    case 4:
    cout << "You chose Four" << endl; 
    break;

    case 5:
    cout << "You chose Five" << endl; 
    break;

    default :
    cout << "Invalid Choice. Enter a no between 1 and 5" << endl; 
    break;
    }
system("PAUSE");
}








