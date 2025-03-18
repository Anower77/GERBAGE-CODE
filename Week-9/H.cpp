#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	string s; cin>>s;
	map<char, int> freq;
	for(char c:s) freq[c]++;

	ll cnt =0;
	char ch;
	for(auto x:freq)
	{
		if(x.second%2 != 0)
		{
			cnt++;
			ch = x.first;
		}
	}


	if((s.size()%2==0 && cnt>0) or (s.size()%2==1 && cnt>1))
	{
		cout<<"NO SOLUTION";
		return;
	}
	
	
	string ss="";
	for(auto x:freq)
	{
		ss += string(x.second/2, x.first);		
	}	

	string res = ss;
			
	if(cnt==1) res+=ch;
	reverse(ss.begin(), ss.end());
	res += ss;
		
	cout<<res<<'\n';
	
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    {
    	solve();

    }


    return 0;
}