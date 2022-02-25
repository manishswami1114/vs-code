#include <iostream>
using namespace std;
int main(){
    int n1, n2, n3; cin >> n1 >> n2 >> n3;
    if (n1 < n2 && n2 < n3)
        cout << n1 << n2 << n3 << "is a increasing no" << endl;
    else if (n2 > n3)
        cout << n1 << n3 << n2 << "is a increasing no" << endl;
    else if (n1 > n2 && n2 > n3)
        cout << n3 << n2 << n1 << "is a increasing no" << endl;
    else if (n1 > n2 && n2 < n3)
        cout << n2 << n1 << n3 << "is a increasing no" << endl;
    else
        cout << n1 << n3 << n2 << "is increasing no" << endl;
    return 0;
}
