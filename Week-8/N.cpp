#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;
ll cnt=0;

vector<int> prime = {2 , 3, 5, 7, 11 , 13, 17 , 19 , 23 , 29 , 31} ;



void solve()
{

	ll n; cin>>n;
	vector<ll> a(n);
	vector<ll> rem(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll cnt=0;
	for(auto x: prime)
	{
		bool ok=false;
		for(int i=0; i<n; i++)
		{
			if(rem[i]==0 and a[i]%x==0)
			{
				if(!ok)
				{
					ok = true;
					cnt++;
				}
				rem[i]=cnt;
			}
		}
	}
	
	cout<< cnt << '\n';
	for(auto x:rem)
	{
		cout<< x << " ";
	}
	cout<<'\n';
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