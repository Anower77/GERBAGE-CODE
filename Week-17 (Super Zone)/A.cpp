#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	int n; cin>>n; // 6 =  0 1 2 3 4 5
	string ss; cin>>ss; // W B B W B W

	int s=0, e=0; 

	for(int i=0; i<n; i++)
	{
		if(ss[i]=='B' and s==0) s = i+1; // 2+3+5=10
		if(ss[i]=='B' and s!=0) e = i+1; // 4
	}
	// WBWBBWB
	cout<< abs(s-e)+1 <<'\n'; 
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) solve();
    return 0;
}