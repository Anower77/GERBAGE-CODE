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
    	int n; cin>>n;
    	ll total = n*(n-1)/2;
    	vector<int> a(total);
    	for(int i=0; i<total; i++) cin>>a[i];

    	sort(a.begin(),a.end());
    	for(int i=0; i<total; i+=n)
    	{
    		cout<<a[i]<<" ";
    		n--;
    	}
    	cout<<a[total-1]<<'\n';

    }


    return 0;
}