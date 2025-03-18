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
    	vector<int> a(n);
    	for(int i=0; i<n; i++) cin>>a[i];

    	sort(a.begin(), a.end());
    	int ans=0;

    	for(int k=n; k>=0; k--)
    	{
    		int cnt=0, step=1, l=0, r=n-1;
    		vector<int> v;

    		while(r>=l)
    		{
    			int req= k+1-step;
    			while(v[r] > req)
    			{
    				r--;
    			}

    			if(step>=k) ans=k;
    			if(r<0 or r<l) break;

    			if(v[r]<=req)
    			{
    				r--;
    				v[l] += req;
    				l++, step++;
    			}
    		}

    		if(step>=k+1)
    		{
    			ans = max(ans,k);
    			break;
    		}

    	}

    }


    return 0;
}