#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	int n,m,x; cin>>n>>m>>x;

	x--;
	set<ll> s;
	s.insert(x);


	for(int i=0; i<m; i++)
	{
		int d;
		char c; cin>>d>>c;


		set<ll> tmp;
		for(auto x:s)
		{
			if(c== '0')
			{
				tmp.insert((d+x) % n);
			}
			else if(c== '1')
			{
				tmp.insert((x-d+n) % n);
			}
			else
			{
				tmp.insert((d+x) % n);
				tmp.insert((x-d+n) % n);
			}
		}
		s=tmp;
	}


	cout<< s.size() <<'\n';
	vector<ll> v;
	for(auto x:s) v.push_back(x+1);


	sort(v.begin(), v.end());
	for(auto x:v) cout<< x <<" ";
	cout<<'\n';
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