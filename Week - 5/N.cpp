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
    	vector<int>a(n);
    	for(int i=0; i<n; i++) cin>>a[i];

    	bool found =0;
    	for(int i=0; i<n-1; i++)
    	{
    		if(a[i]>a[i-1]  and  a[i]>a[i+1])
    		{
    			found=1;
    			break;
    		}
    	}
    	if(!found)
    	{
	    	cout<<"NO\n";
    	}
    	else
    	{
    		cout<<"Yes\n";
            cout<<i-1<<" "<<i<<" "<<i+1<<"\n";
    	}

    }


    return 0;
}