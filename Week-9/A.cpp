#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];

	int ans=0;
	set<int> s;
	int i=0,j=0;

	while(i<n and j<n)
	{
		while(j<n and s.count(a[j])==0)
		{
			s.insert(a[j]);
			ans = max(ans, j-i+1);
			j++;
		}

		while(j<n and s.count(a[j])>0)
		{
			s.erase(a[i]);
			i++;
		}
	}
	cout<<ans<<'\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    {
    	solve();

    }


    return 0;
}