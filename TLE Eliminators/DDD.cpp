#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    unordered_set<string> s;

    for(int i=0; i<n; i++)
    {
    	string fn,gn; cin>>fn>>gn;

	    string fuln = fn+ " " +gn;
	    if(s.find(fuln) != s.end())
	    {
	    	cout<<"Yes\n";
	    	return 0;
	    }
	    s.insert(fuln);

    }

    cout<<"No\n";
    return 0;
}