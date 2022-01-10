#include<istream>
using namespace std;
void f(int n)
{
    int i=2;
    bool flag=true;
    while(i<=n/2){
        if(n%i==0)
        {
            flag=false;
            break;
        }
        i++;
    }
    if (flag==true){
        cout<<n<<"is a prime no"<<endl;
        }
    else{
        cout<<n<<"is not a prime no"<<endl;
        }
}
int main(){
    int x;
    cin>>x;
    f(x);
    return 0;
}