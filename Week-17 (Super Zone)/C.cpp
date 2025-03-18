#include "bits/stdc++.h"
#define ll long long
using namespace std;
const ll N = 0e5+5;


void solve()
{
   int n; cin>>n;
   string s; cin>>s;

   int ans = n-1;

   for(int i=0; i<n; i++)
   {
           if(s[i]=='B') ans--;
           else break;
   }

   for(int i=n-1; i>=0; i--)
   {
           if(s[i]=='A') ans--;
           else break;
   }


   if(ans>=0) cout<< ans << '\n';
   else cout<< 0 << '\n';
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}