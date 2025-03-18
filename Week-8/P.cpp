#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void prime(int n,map<int,int>& freq)
{
	for(int i=2; i*i<=n; i++)
	{
		while(n%i == 0)
		{
			n = n/i;
			freq[i]++;
		}
	}
	if(n>1) freq[n]++;
}



void solve()
{
	int n; cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++) cin>>a[i];


	map<int,int> freq;
	for(int i=0; i<n; i++)
	{
		prime(a[i], freq);
	}


	bool ok = true;
	for(auto i : freq)
	{
		if(i.second%n != 0) ok = false;
	}


	if(ok) cout<<"YES\n";
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