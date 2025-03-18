#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve(int n)
{
	vector<int> skill(n);
	map<int, int> sp;

	for(int i=0; i<n; i++)
	{
		cin>>skill[i];
		sp[skill[i]] = i;
	}

	vector<int> rank(n, 0);
	int rc = 0, chT = 1, time = 0;


	for(auto e:sp)
	{
		int pos = e.second;
		rank[pos] = rc;
		time++;


		if(time >= chT)
		{
			chT *=  2;
			rc++;
			time = 0;
		}
	}


	for(int r: rank) cout<< r << " ";
	cout<<'\n';
}






int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	int n; cin>>n;
    	solve(n);
    }


    return 0;
}










