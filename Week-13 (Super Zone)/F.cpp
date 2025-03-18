#include "bits/stdc++.h"
#define ll long long 
#define yes cout<<"YES\n" 
#define no cout<<"NO\n" 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	if(n==1) 
	{
		yes;
	    return;
	}
	
	ll sum=0;
	map<ll,ll> freq;
	bool pos= true;

	for(int i=0; i<n; i++)
	{
		freq[a[i]]++;
		sum+=a[i];
	}

	priority_queue<ll> pq;
	pq.push(sum);

	while(!pq.empty())
	{
		ll sp = pq.top();
		pq.pop();

		ll x = sp/2;
		ll y = sp-x;

		if(freq[x]>0) freq[x]--;
		else if(freq[x]==0 and x>1)
		{
			pq.push(x);
		}

		if(freq[y]>0) freq[y]--;
		else if(freq[y]==0 and y>1)
		{
			pq.push(y);
		}

		if(pq.size()> n+2) 
		{
			pos=false;
			break;
		}
	}
	
	for(int i=0; i<n; i++)
	{
		if(freq[a[i]]>0) 
		{
			pos=false;
			break;
		}
	}

	if(pos) yes;
	else no;
	
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