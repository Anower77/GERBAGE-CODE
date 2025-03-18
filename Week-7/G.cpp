#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll r,ans=0,k,n; cin>>n>>k;
    vector<int> a,b;
	for(int i=0; i<n; i++)
    {
    	int x; cin>>x;
        if(x>0)
        {
        	a.push_back(x);
        }
  		else if(x<0)
 		{
			b.push_back(-x);
		}
    }
                	
 		sort(a.begin(), a.end());
    	sort(b.begin(), b.end());
                	
    for( int i=a.size()-1; i>=0; i-=k)
    {
    	ans+=2*a[i];
  	}
	
	for( int i=b.size()-1; i>=0; i-=k)
  	{               		
    	ans+=2*b[i];
  	}
                	
			

	if(!a.empty()  and  !b.empty())
	{
		ans -= max(a.back(), b.back());
	}
	else if(!a.empty()) ans -= a.back();
	else if(!b.empty()) ans -= b.back();		
					
					
	cout<<ans<<endl;
                 
                 
}



int main() 
{ 
	ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0; 
}  
 
 