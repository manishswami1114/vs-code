#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e7+10; 
vector<ll>v(N,1);
int main() {
	ll t;
	cin>>t;

	while(t--){
	    ll n;
	    cin>>n;
	    ll max=0;
	    if(n&1){
	        cout<<(n-n/2)<<endl;
	    }
	    else{
	        cout<<(n/2)<<endl;
	    }
}
	
}