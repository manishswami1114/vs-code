#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>V(10, 5, 20);
    for(int x:V) {
        cout << x << " "; 
    }
    return 0;
}
