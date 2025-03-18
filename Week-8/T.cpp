#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	int n,m; cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));

	int val=1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			a[i][j] = val++;
		}
	}


	for(int i=1; i<n; i+=2)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
	}




	for(int i=0; i<n; i+=2)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<'\n';
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