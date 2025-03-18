#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 2e8+5;



void solve()
{
	ll n,m; cin>>n>>m;
	ll p = n+m+1;
	vector<ll> a(p), b(p);
	for(int i=0; i<p; i++) cin>>a[i];
	for(int i=0; i<p; i++) cin>>b[i];


	ll l=n, r=m;
	ll x=-1, y-1, c=-1, w=-1;
	vector<ll> ans, pre(p+1);

	for(int i=0; i<p; i++)
	{
		if(l>0 and r>0)
		{
			if(a[i] > b[i])
			{
				pre[i+1]=a[i]+pre[i];
				l--;
			}
			else
			{
				pre[i+1]=b[i]+pre[i];
				r--;
			}
		}
		else
		{
			if(a[i]>b[i] and x==-1) x=i;
			if(a[i]<b[i] and y==-1) y=i;
		
			if(l>0)
			{
				if(c==-1) c=i-1, w=0;
				pre[i+1]=a[i]+pre[i];
			}
			else
			{
				if(c==-1) c=i-1, w=1;
				pre[i+1]=b[i]+pre[i];
			}
		}
	}

	if(x==-1) x=p-1;
	if(y==-1) y=p-1;


	ll sum=0;
	for(int i=p-1; i>=0; i--)
	{
		if(i>c)
		{
			if(w==0) 
			{
				ans.push_back(pre[i+1]+sum-a[i]);
				sum+=a[i];
			}
			else
			{
				ans.push_back(pre[i+1]+sum-b[i]);
				sum+=b[i];
			}
		}
		else
		{
			if(a[i]>b[i])
			{
				ans.push_back(pre[i+1]+sum-a[i]+a[x]-(w==0 ? a[x] : b[x]));
				sum+=a[i];
			}
			else
			{
				ans.push_back(pre[i+1]+sum-b[i]+b[y]-(w==0 ? a[y] : b[y]));
				sum+=b[i];
			}
		}
	}

	reverse(ans.begin(), ans.end());
	for(auto a:ans) cout<<a<<" ";
	cout<<'\n';

}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll tt; cin>>tt;
    while(tt--)
    {
    	solve();
    }


    return 0;
}