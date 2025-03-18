#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    int t; cin>>t;  
    while(t--)
    {
    	ll n, ans=1; cin>>n;
    	while(ans<=n) ans*=2;
    	
    	ans/=2, ans--;
    	cout<<ans<<'\n';
    }

    
    return 0;
}
