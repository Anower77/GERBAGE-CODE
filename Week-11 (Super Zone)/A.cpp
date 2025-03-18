#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,m,k;

	while(cin>>n>>m>>k)
	{
		vector<ll> a(n,0), b(n+1, 0), c(m+1, 0);
		vector<vector<ll>> M(m, vector<ll>(3));

		for(int i=0; i<n; i++) cin>>a[i];


		for(int i=0; i<m; i++)
		{
			for(int j=0; j<3; j++) cin>>M[i][j];
			M[i][0]--;
			M[i][1]--;
		}


		for(int i=0; i<k; i++)
		{
			ll x,y; cin>>x>>y;
			x--; y--;
			c[x]++;
			if(y+1<m) c[y+1]--;
		}


		ll tmp=0;
		for(int i=0; i<m; i++)
		{
			tmp += c[i];
			b[M[i][0]] += tmp * M[i][2];
			
			if(M[i][1]+1 < n) 
			{
				b[M[i][1]+1] -= tmp * M[i][2];
			}
		}


		tmp =0;
		for(int i=0; i<n; i++)
		{
			tmp += b[i];
			if(i==0) cout<< tmp + a[i];
			else cout<< " "<< tmp + a[i];
		}
		cout<< '\n';
	}
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