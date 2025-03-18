#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

bool isV(char c)
{
	return (c=='a' or c=='e' or c=='i' or c=='o' or c=='u');
}


bool solve(string s, string t)
{	
	if(s.size() != t.size()) return false;

	ll n=s.size();

	for(int i=0; i<n; i++)
	{
		char sc = s[i];
		char tc = t[i];
	
		if(isV(sc) != isV(tc)) return false;
	}

	return true;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t; cin>>s>>t;
    if(solve(s, t))
    {
    	cout<<"YES\n";
    }
    else
    {
    	cout<<"NO\n";
    }


    return 0;
}


