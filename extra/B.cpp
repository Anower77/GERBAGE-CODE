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
        for(int i=n; i>=1; i--)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
    }


    return 0;
}