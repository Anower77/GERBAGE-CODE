#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


bool solve(int mid, vector<int>& v)
{
	vector<int> v1;
	int val = v[0]-mid;
	v1.push_back(val);

	for(int i=1; i<v.size(); i++)
	{
		if(abs(val-v[i]) > mid)
		{
			val = v[i]-mid;
			v1.push_back(val);
		}
	} 
	if(v1.size() <= 3) return true;
	return false;
}

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

    	sort(a.rbegin(), a.rend());
    	int l =0, r = INT_MAX, ans = INT_MAX;

    	while(hi >= lo)
    	{
    		int mid= l+(r-l)/2;

    		if(solve(mid, a))
    		{
    			ans = mid;
    			r = mid -1;
    		}
    		else
    		{
    			l = mid +1;
    		}
    	}
    	cout<< ans <<'\n';
    }


    return 0;
}