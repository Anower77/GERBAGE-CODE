#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	vector<ll> a(n);
	for(int i=0; i<n; i++) cin>>a[i];


	bool ok=false;
	for(int i=1; i<n; i++)
	{
		if(abs(max(a[i], a[i-1]) - min(a[i], a[i-1])) >= 2)
		{
			cout<<"YES\n";
			cout<<i<<" "<<i+1<<'\n';
			ok = true;
			break;
		}

		if(!ok) cout<<"NO\n";
	}

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