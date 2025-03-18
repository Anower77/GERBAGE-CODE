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

    	vector<int> diff(n-1);
    	for(int i=0; i<n-1; i++)
    	{
    		diff[i] = abs(a[i] - a[i+1]);
    	}


    	int opti = INT_MAX;
    	if(n >= 2) opti = min(opti, diff[0]);
    	if(n >= 2) opti = min(opti, diff[n-2]);


    	for(int i=1; i<n-1; i++)
    	{
    		int mxDiff = max(diff[i-1], diff[i]);
    		opti = min(opti, mxDiff);
    	}
    	cout<< opti <<'\n';

    }


    return 0;
}