#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n,x; cin>>n>>x;
	vector<ll> a(n); 
	for(int i=0l i<n; i++) cin>>a[i];
	sort(a.begin(), a.end());

	ll ans=0;
	for(int i=0; i<n; i++)
	{
		if(a[i] != -1)
		{
			ll tar = a[i]*x;
			ll f=-1, l=i+1, h=n-1;

			while(l<=h)
			{
				ll mid = l+(h-l)/2;
				if(a[mid]==tar)
				{
					f = mid;
					h = mid-1;
				}

				if(a[mid] < tar) l=mid+1;
				else h= mid-1;
			}

			if(f==-1) ans++;
			else a[f]=-1;
		}
	}
	cout<< ans <<'\n';
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