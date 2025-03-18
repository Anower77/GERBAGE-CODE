#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


int solve(string& s, int l, int r, vector<int>& pre0, vector<int>& pre1)
{
    ll c0= pre0[r+1]-pre0[l];
    ll c1= pre1[r+1]-pre1[l];

    if(c0==c1) return 2;
    else return 1;
}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NUint);

    int t; cin>>t;
    while(t--)
    {
    	int n; cin>>n;
    	string s; cin>>s;
    	int res = solve(s);
    	cout<<res<<'\n';
    }


    return 0;
}