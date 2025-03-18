#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin>>n;
    string s[] = {'b','b','a','a'};

    ll c=0;
    for(int i=0; i<n; i++)
    {
    	cout<<s[c];
    	c++;
    	if(c == 4) c=0;
    }

    cout<<'\n';

    return 0;
}