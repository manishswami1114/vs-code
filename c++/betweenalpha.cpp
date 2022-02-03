#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    char sc, ec;
    cin >> sc >> ec;
    char r = static_cast<char>(sc + rand() % (ec - sc + 1));
                                 cout
                             << r << endl;
    return 0;
}
