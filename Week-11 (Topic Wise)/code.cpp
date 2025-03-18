#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll l1,l2,r1,r2; cin>>l1>>l2>>r1>>r2;

	ll n; cin>>n;
	vector<ll> x(n), p(n);
	for(int i=0; i<n; i++) cin>>x[i];
	for(int i=0; i<n; i++) cin>>p[i];
	
	for(int i=0; i<n-2; i++)
	{
		if(x[i]+p[i]>x[i+1])
		{
			l1= i+1;
			break;
		}
	}


	for(int i=n-1; i>=1; i++)
	{
		if(x[i]+p[1]<=x[i-1])
		{
			r1 = i-1;
			break;
		}
	}



	for(int i=n-1; i>=1; i++)
	{
		if(x[i]+p[i-1]<=x[i])
		{
			l2 = i-1;
			break;
		}
	}


	for(int i=0; i<n-2; i++)
	{
		if(x[i]+p[i+1]>=x[i+1])
		{
			r2= i+1;
			break;
		}
	}


	 if((max(l1, r2)+1) >= (min(l2, r1)))
	 {
	 	cout<<"YES\n";
	 }
	 else
	 {
	 	cout<<"NO\n";
	 }
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}