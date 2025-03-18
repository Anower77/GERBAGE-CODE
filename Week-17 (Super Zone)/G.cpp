#include "bits/stdc++.h"
#define ll long long
using namespace std;
const ll N = 1e5+5;

void solve()
{
   int n; cin >> n;
   vector<int> a(n), v;
   for (int i=0; i<n; i++) cin >> a[i];
   sort(a.begin(), a.end());

	if(n%2==1)
	{
		cout<<"NO\n";
		return;
	}


    for (int i=0, j=n/2; i<n/2; i++,j++)
    {
       v.push_back(a[i]);
       v.push_back(a[j]);
    }

    v.push_back(v[0]);
    v.push_back(v[1]);
    int ans=0;

   for (int i=1; i<v.size()-1; i++) 
   {
        if(v[i]>v[i-1] && v[i]>v[i+1])continue;
        else if(v[i]<v[i-1] && v[i]<v[i+1])continue;
        else
        {
            ans=1;
            break;
        }
   }

   if (ans==1) cout<<"NO\n";
   else
   {
       cout<<"YES\n";
	   for(int i=0; i<n; i++) cout<<v[i]<<" ";
	   cout<<'\n';   
   }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1; cin >> t;
    while(t--) solve();
    return 0;
}
