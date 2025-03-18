#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	ll n,x=0; cin>>n;
	vector<ll> a(n);

	for(int i=0; i<n; i++) cin>>a[i];

	for(int i=0; i<n; i++)
	{
		bool ok = false;
		for(int j=1; j<=i+1; j++)
		{
			if(a[i] % (j+1) != 0)
			{
				ok = true;
				break;
			}
		}
		if(!ok) 
		{
				cout<<"NO\n";
				return;
		}
	}
	cout<< "YES\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	solve();

    }


    return 0;
}