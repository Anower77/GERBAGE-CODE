#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	int n; cin>>n;
	vector<int> a(n), b(n);
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<n; i++) cin>>b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int ans=0;
	for(int i=n-1; i>=0; i--)
	{
		if(a[i]>b[i] or (b[i]-a[i])>1)
		{
			ans=1;
			break;
		}
	}

	if(ans==0) cout<<"YES\n";
	else cout<<"NO\n";
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