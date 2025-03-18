#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;




void solve()
{
	int n; cin>>n;
	if(n%2 == 0)
	{
		cout<< n/2 <<'\n';
		for (int i=0; i<n/2; i++)
		{
			cout<< 2 << " ";
		}

	}
	else
	{
		int res = n-3;
		cout<< res/2+1 <<'\n';

		for(int i=0; i<res/2; i++)
		{
			cout<< 2 << " ";
		}
		cout<<3;
	}
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    // int t; cin>>t;
    // while(t--)
    // {
    // 	solve();

    // }


    return 0;
}