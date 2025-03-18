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
    	int a,b,n; cin>>a>>b>>n;
    	vector<int> arr(n);
    	int sum =0;
    	if(a>=0)
    	{
    		sum=a;
    		b=a;
    	}
    	else
    	{
    		sum=b;
    	}

    	for (int i=0; i<n; i++)
    	{
    		cin>>arr[i];
    		if(arr[i]+1<=a)
    		{
    			sum+=arr[i];
    		}
    		else
    		{
    			sum+=a-1;
    		}
    	}
    	cout<<sum<<'\n';
    }


    return 0;
}