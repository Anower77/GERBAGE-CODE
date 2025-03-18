#include "bits/stdc++.h"
#define ll long long
using namespace std;
const ll N = 1e5+5;


void solve()
{
   int n; cin>>n;

   if(n==1) cout<<"1"<<'\n';
   else if(n==2) cout<<"2 1"<<'\n';
   else
   {

           int c=4;
           vector<int> a(n,0);
           a[0]=2, a[n/2]=1, a[n-1]=3;

           for(int i=0; i<n; i++)
           {
                   if(a[i]==0) a[i]=c++;
           }

           for(int i=0; i<n; i++) cout<<a[i]<<" ";
           cout<<'\n';
   }

}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1; cin>>t;
    while(t--) solve();
    return 0;
}