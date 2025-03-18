#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	string s; cin>>s;
	ll ans = LLONG_MAX;

	for(int i=0; i<n-1; i++)
	{
		ll num = (ll)(s[i]-48) * 10 + (ll)(s[i+1]-48);
		ll sum=0;
		
		for(int j=0; j<i; j++)
		{
			if(s[j]=='0')
			{
				cout<<0<<'\n';
				return;
			}
			if(s[j] >= '2') sum += ((ll)s[j]-48);
		}

		for(int j=i+2; j<n; j++)
		{
			if(s[j]=='0')
			{
				cout<<0<<'\n';
				return;
			}

			if(s[j] >= '2') sum += ((ll)s[j]-48);
		}

		if(num==1 and sum>0) num=sum;
		else num += sum;
		ans = min(ans, num);
	}
	cout<< ans <<'\n';
	
	
}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}