#include<iostream> 
#include<vector>
using namespace std;
int main(){
    vector<int> V;
    V.push_back(10);
    V.push_back(7);
    V.push_back(2);

    for(int i=0;i<V.size();i++){
    cout<<V[i]<<" ";
    }
    for(int X:V){
    cout<<X<<endl;
    }
return 0;
}