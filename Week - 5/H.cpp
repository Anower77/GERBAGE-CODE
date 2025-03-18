#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	int n; cin>>n;
    	vector<int> a(n);
    	ll ng=0, ans=0, mn= INT_MAX; 
    	
    	
    	for(int i=0; i<n; i++)
    	{
			cin>>a[i];
    		if(a[i]<0) ng++;
    		
    		ans += abs(a[i]);
    		mn = min(mn,abs(a[i]));
    	}

    	if(ng%2 == 1)
    	{
    		ans -= (2LL*mn);
    	}

    	cout<<ans<<'\n';


    }


    return 0;
}