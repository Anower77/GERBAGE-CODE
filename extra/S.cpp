#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    
    	int n; cin>>n;
    	vector<int> arr(n);
    	for(int i=0; i<n; i++) cin>>arr[i];

    	bool flag=0;
    	int x = (1<<n);
    	for (int i=0; i<x; ++i)
    	{
    		int sum=0;
    		for(int b=0; b<n; b++)
    		{
    			if(i & (1<<b))
    			{
    				sum += arr[b];
    			}
    			else
    			{
    				sum -= arr[b];
    			}
    		}
    		if((sum % 360)==0)
    		{
    			flag = 1;
    			break;
    		}
    	}

    	if(flag==1)
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}


    

    
    return 0;
}
