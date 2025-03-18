#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n,k; cin>>n>>k;
	ll tmp=n, flag=0, cnt=0, eq=0;

	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	if(a[0] == a[n-1])
	{
		for(int i=0; i<n; i++)
		{
			if(a[i] == a[0]) cnt++;
			if(cnt == k) break;
		}

		if(cnt == k) cout<< "YES\n";
		else cout<< "NO\n";
	}
	else
	{
		for(int i=0; i<n; i++)
		{
			if(a[i] == a[0]) cnt++;
			if(cnt == k)
			{
				tmp = i;
				cnt = 0;
				break;
			}
		}

		for(int i=tmp+1; i<n; i++)
		{
			if(a[i] == a[n-1]) cnt++;
			if(cnt == k) 
			{
				flag = 1;
				break;
			}
		}

		if(flag == 1) cout<<"YES\n";
		else cout<<"NO\n";

	}

}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) solve();
    return 0;
}