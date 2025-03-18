#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    
    int mx = a[0], x=0;
    int mn = a[0], y=0;
    for(int i=0; i<; i++)
    {
        if(a[i]>mx) mx = a[i], x=i;
        if(a[i]<mn) mn = a[i], y=i;

    }

    swap(a[x], a[y]);
    // output
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
  

    return 0;
}