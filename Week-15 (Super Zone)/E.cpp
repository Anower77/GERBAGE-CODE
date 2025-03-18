#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	if(n==1)
	{
		cout<<1<<'\n';
		return;
	} 
	
	if(n%2) cout<<"-1\n";
	else{
		
		ll t=0, len=n, i=0, j=n-1, c=0;
		while(i<=j)
		{
			if(c%2)
			{
				ll cur=0;
				if(j<t)
				{
					cur=(n+j)-t;
				}
				else cur = j-t;

				cout<< cur <<'\n';
				t=j;
				j--;
			}
			else
			{
				ll cur=0;
				if(i<=t)
				{
					cur = (n+i)-t;
				}
				else cur = i-t;
				
				cout<< cur << " ";
				t=i;
				i++;
			}
			c++;
		}
		cout<<'\n';
	}


}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}