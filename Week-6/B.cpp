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
    	ll n,k; cin>>n>>k;
    	vector<ll> a(n);
    	for (int i=0; i<n; i++) cin>>a[i];

    	ll l=0; r=1e15;

   		while(l<=r)
   		{
   			ll total=0;
   			ll mid = l+(r-l)/2;
   			for(int i=0; i<n; i++)
   			{
   				if(a[i] < mid)
   				{
   					total += (mid- a[i]);
   				}
   			}
   			if(total > k)
   			{
   				r= mid;
   			}
   			else
   			{
   				l= mid;
   			}
   		}
   		cout<<l<<'\n';
    }


    return 0;
}