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
    	vector<int> arr(n);
    	for(int i=0; i<n; i++) cin>>arr[i];

    	int end = arr[0];
    	for(int i=1; i<n; i++) end = end & arr[i];
    	cout<<end<<'\n';
    }

    
    return 0;
}
