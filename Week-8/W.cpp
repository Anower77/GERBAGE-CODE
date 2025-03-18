#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	int n; cin>>n;
	int mx=-1;
	vector<int> a(1001, 0);

	for(int i=1; i<=n; i++)
	{
		int x; cin>>x;
		a[x]=i;
	}



	for(int i=1; i<=1000; i++)
	{
		for(int j=1; j<=1000; j++)
		{
			if(a[i] and a[j] and __gcd(i,j)==1)
			{
				mx = max(mx, a[i]+a[j]);
			}
		}
	}

	cout<< mx <<'\n';
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