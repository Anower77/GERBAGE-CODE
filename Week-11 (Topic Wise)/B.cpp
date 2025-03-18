#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	ll n,x=1; cin>>n;
	vector<ll> ans;

	while(x<=n)
	{
		ans.push_back(x);
		x <<= 1;	
	}

	if(ans.back() != n)
	{
		x>>=1;
		ll tmp = n-x;
		ll pw =1;
		vector<ll> v;
		
		while(tmp)
		{
			if(tmp&1) v.push_back(pw);
			tmp >>= 1;
			pw <<= 1;
		}

		reverse(v.begin(), v.end());
		for(auto& i:v)
		{
			x += i;
			ans.push_back(x);
		}
	}

	ll sz= ans.size();
	cout<< sz <<'\n';
	for(int i=sz-1; i>=0; i--)
	{
		cout<< ans[i] << " ";
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