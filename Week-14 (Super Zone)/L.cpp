#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n,m,h; cin>>n>>m>>h;
	vector<vector<ll>> mat(n, vector<ll>(m));
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin>>mat[i][j];


	vector<pair<ll,ll>> p;
	for(auto &e: mat) 
	{
		sort(e.begin(), e.end());
	}


	for(int i=1; i<n; i++)
	{
		ll tol = 0, c = 0, sum = 0;
		for(auto e:mat[i])
		{
			sum += e;
			if(sum>h) break;
			tol += sum;
			c--;
		}
		p.push_back({c, tol});
	}

	ll tol = 0, c = 0, sum = 0;
	for(auto e: mat[0])
	{
		sum += e;
		if(sum>h) break;

		tol += sum;
		c--;
	}


	sort(p.begin(), p.end());
	while(p.size() and (p.back() >= make_pair(c,tol)))
	{
		p.pop_back();
	}

	cout<< p.size()+1<< '\n';

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