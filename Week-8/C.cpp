#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

  		int a[10000000] = {0};
    	for(int i=2; i<=10000000; i++)
    	{
    		if(a[i] == 0)
    		{
    			for(int j=2; i*j<=10000000; j++)
    			{
    				a[i*j] = 1;
    			}
    		}
    	}


    	ll x; cin>>x;
    	ll b;
    	ll sq;
    	for(int i=0; i<x; i++)
    	{
    		cin>>b;
    		sq = sqrt(b);
    		if(b==1) 
    		{
    			cout<<"NO\n";
    		}
    		else if(sq*sq==b and a[sq]==0)
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