#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b; cin>>n>>a>>b;

    int l=1, r= min(a,b), ans=0;

    while(l<=r)
    {
    	int mid = l+(r-l)/2;
    	if(a / mid+b / mid >= n)
    	{
    		ans =mid;
    		l = mid + 1;
    	}
    	else
    	{
    		r = mid - 1;
    	}
    }
    cout<< ans <<'\n';

    return 0;
}