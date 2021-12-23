#include<iostream>
using namespace std;
int main(){

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

    case 6:
    cout << "You chose Five" << endl; 
    break;

    default :
    cout << "Invalid Choice. Enter a no between 1 and 5" << endl; 
    break;
    }
return 0;
}