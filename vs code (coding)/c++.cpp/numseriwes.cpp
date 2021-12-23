#include<iostream>
using namespace std;
int main(){
    int i,j,n,sum,total=0;
    cin>>n;
    for(i=1;i<=n;i++){
        sum=0;
        for(j=1;j<=i;j++){
            total +=j;
            sum +=j;
            cout<<j;
            if(i>j)
            {
                cout<<"+";

            }
        }
        cout<<" = "<<sum<<endl;
    }
    cout<<"\n the sum of above series is "<<total<<endl;
}