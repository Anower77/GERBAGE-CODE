#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


bool palindrome(vector<ll>& v, ll x)
{
	ll n=v.size(), i=0, j=n-1;

	while(i < j)
	{
		if(v[i] == x) i++;
		else if(v[j] == x) j--;
		else if(v[i] != v[j]) return false;
		else i++,j--;
	}
	return 1;
}


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	bool ok = true;
	for(int i=0; i<n-1-i; i++)
	{
		if(a[i] != a[n-1-i])
		{
			ok = palindrome(a, a[i]) or palindrome(a, a[n-1-i]);
			break;
		}
	}

	if(ok) cout<<"YES\n";
	else cout<<"NO\n";


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