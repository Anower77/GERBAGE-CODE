#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

bool solve(int a, int b, int c, int d)
{
	if((a<c and c<b and b<d) or (c<a and a<d and d<b))
	{
		return true;
	}
	return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	int a,b,c,d; cin>>a>>b>>c>>d;

    	if(solve(a,b,c,d))
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}
    }


    return 0;
}