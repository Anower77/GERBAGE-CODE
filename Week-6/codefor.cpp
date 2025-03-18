#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	int n; cin>>n;
    	string s; cin>>s;

    	int one=0, zero=0;
    	for(int i=0; i<n; i++)
    	{
    		if(s[i] == '1')
    		{
    			one++;
    		}
    		else
    		{
    			zero++;
    		}
    	}

    	int mn = min(one, zero);
    	if(mn%2 == 0)
    	{
    		cout<< "Ramos"<<'\n';
    	}
    	else
    	{
    		cout<< "Zlatan"<<'\n';

    	}

    }


    return 0;
}