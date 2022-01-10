#include<iostream>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
}
for(int i=0;i<r;i++){
    if(i%2==0){
        for(int j=0;j<c;j++){
        cout<<a[i][j]<<" ";
        }
    }
    if{
        for(int j=c-1;j<=0;j--){
            cout<<a[i][j]<<" ";
        }

    }

cout<<endl;
return 0;
}

/*10 20 30 
40 50 60 */