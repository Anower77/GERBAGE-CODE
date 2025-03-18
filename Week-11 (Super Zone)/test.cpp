#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;
const ll ALP = 26;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   ll t; cin>>t;
   while(t--)
   {
   		string s; cin>>s;
   		ll k; cin>>s>>k;

   		ll i=0, j=s.size()-1;
   		ll c=0;
   		while(i<j)
   		{
   			if(s[i] != s[j])
   			{
   				ll diff = abs(s[i]-s[j]);
   				c+=diff;
   				k-=diff;
   				if(k<0) break;
   			}
   			i++,j--;
   		}

   		if(k>=0) cout<<"YES\n";
   		else cout<<"NO\n";
   }

    return 0;
}