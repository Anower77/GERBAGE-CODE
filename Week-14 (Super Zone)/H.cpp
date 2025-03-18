#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	ll mn = *min_element(a.begin(), a.end());
	ll mnIdx=0;

	for(int i=0; i<n; i++)
	{
		if(a[i] == mn) 
		{
			mnIdx=i; 
			break;
		}
	}

	bool ok = false;
	for(int i=mnIdx+1; i<n; i++)
	{
		if(a[i] < a[i-1])
		{
			ok = true; 
			break;
		}
	}

	if(ok) mnIdx=-1;
	cout<< mnIdx <<'\n';

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