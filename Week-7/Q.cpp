#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;




void solve()
{
	string s; cin>>s;
	int cnt1=0, cnt2=0;

	// for -->1
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == '1') cnt1++;
		else cnt2++;
	}


	// for -->0
	for(int i=0; i<s.size(); i++)
	{
		if(s[i] == '1')
		{
			if(cnt2>0) cnt2--;
			else break;
		} 
		else
		{
			if(cnt1>0) cnt1--;
			else break;
		}
	}

	cout<< (cnt1 + cnt2) << '\n';

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