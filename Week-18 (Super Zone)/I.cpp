#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

ll left(string s, string t, ll i, ll x)
{
	while(x < t.size() and i>=0)
	{
		if(t[x] == s[i]) x++, i--;
		else break;
	}

	if(x==t.size()) return 1;
	return 0;
}



ll right(string s, string t, ll i, ll x)
{
	if(x == t.size()) return 1;
	if(x+1 == t.size())
	{
		if(i+1 < s.size() and s[i+1] == t[x]) return 1;
		else if(i-1 >= 0 and s[i-1]==t[x]) return 1;
		else return 0;
	}

	ll r1=0, r2=0;
	if(i-1 >= 0 and s[i-1]==t[x]) r1=left(s,t,i-1, x);
	if(r1) return 1;
	if(i+1 < s.size() and s[i+1]==t[x]) r2=right(s,t,i+1, x+1);

	return (r1 or r2);
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) 
    {
    	string s,t; cin>>s>>t;
    	ll f=0, l=t.size();
    	for(int i=0; i<s.size(); i++)
    	{
    		if(s[i]==t[0])
    		{
    			f = right(s,t,i,1);
    			if(f==1) break;
    		}
    	}

    	if(f) cout<< "YES\n";
    	else cout<< "NO\n";
    }
    return 0;
}