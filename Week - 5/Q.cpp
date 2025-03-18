#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with.stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	string s; cin>>s;
    	int num =0;
    	int n = s.size();

    	if(n%2 == 0 and n>2)
    	{
    		for(int i=1; i<n/2; i++)
    		{
    			if(s[i] != s[i-1])
    			{
    				num++;
    				break;
    			}
    		}
    	}
    	else if(n%2 != 0 and n>3)
    	{
    		for(int i=1; i<n/2; i++)
    		{
    			if(s[i] != s[i-1])
    			{
    				num++;
    				break;
    			}
    		}
    	}

    	if(num) cout<<"YES\n";
    	else cout<<"NO\n";

    }


    return 0;
}