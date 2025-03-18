#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    int t; cin>>t;  
    while(t--)
    {
    	int n; cin>>n;
    	
    	vector<int> arr(n);
    	for(auto& x:arr)cin>>x;

   		int mx = arr[0], mn = arr[0];
   		for(int i=1; i<n; i++)
   		{
   			mx = mx | arr[i];
   			mn = mn & arr[i];
   		}


   		int ans = mx - mn;
   		cout<<ans<<'\n';
    }

    
    return 0;
}
