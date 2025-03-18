#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	int l,r; cin>>l>>r;
	cout<< "YES\n";
	for(int i=1; i<r+l; i+=2)
	{
		cout<< i << " " << i+1 <<'\n';
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