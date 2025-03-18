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
   		int a,b,c; cin>>a>>b>>c;
		int x1 = abs(a-1);    	
		int x2 = abs(b-c)+(c-1);    	

		if(x1 == x2) cout<<3<<'\n';
		else if(x1 < x2) cout<<1<<'\n';
		else cout<<2<<'\n';

    }

    return 0;
}