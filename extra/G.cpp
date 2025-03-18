#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    int t; cin>>t;  
    while(t--)
    {
    	int n; cin>>n;
    	vector<int> a(n);
    	for(int i=0; i<n; i++) cin>>a[i];

    	int OR=0;
    	for(int i=0; i<n; i++)
    	{
    		OR |= a[i];
    	}
    	cout<<OR<<'\n';

    }

    
    return 0;
}
