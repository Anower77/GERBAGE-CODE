#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = (1<<15);
vector<int> arr;


void mark_palindrome()
{
	for(int i=0; i<N; i++)
	{
		string s= to_string(i);
		int len = s.length();
		bool flag = true;
		for(int i=0; i<(len/2); i++)
		{
			if(s[i] != s[len-i-1])
			{
				flag = false;
				break;
			}
		}
		if(flag) arr.push_back(i);
	}
}





int main() 
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);

    mark_palindrome();

    int t; cin>>t;  
    while(t--)
    {
    	int n; cin>>n;
    	vector<int> cnt(N), a;
    	for(int i=0; i<n; i++)	
    	{
    		int x; cin>>x;
    		cnt[x]++;
    		a.push_back(x);
    	}

    	ll ans= n;
    	for(int i=0; i<n; i++)
    	{
    		for(int j=0; j<arr.size(); j++)
    		{
    			int curr = (a[i] ^ arr[j]);
    			ans += cnt[curr];
    		}
    	}
    	cout<<(ans/2)<<'\n';
    }

    
    return 0;
}
