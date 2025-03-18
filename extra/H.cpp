#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    int t; cin>>t;  
    while(t--)
    {
		int n;cin>>n;
		string s;cin>>s;
		int cnt1=0, cnt2=0;
		
		for(int i=0; i<n/2; i++)
		{
			if(s[i] == s[n-i-1])
			{
				cnt1++;
			}
			else
			{
				cnt2++;
			}
		}

		string ans= string(n+1, '0');

		for(int i=cnt2; i<= (cnt1*2+cnt2); i+=2)
		{
			ans[i] = '1';
			ans[i+ n%2] = '1';
		}

		cout<<ans<<'\n';
    }

    
    return 0;
}
