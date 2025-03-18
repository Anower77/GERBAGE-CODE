#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



void solve()
{
	int n; cin>>n;
	map<int,int> freq;
	vector<int> a(n);


	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		freq[a[i]]++;
	}


	sort(a.begin(), a.end());

	int last;
	vector<int> b;


	for(int i=0; i<n+2; i++)
	{
		if(freq[i]==0)
		{
			last=i;
			break;
		}
		else if(freq[i]==1)
		{
			b.push_back(i);
		}
	}


	if(b.size()==0)
	{
		cout<<last<<'\n';
		return;
	}
	else if(b.size()==1)
	{
		cout<<last<<'\n';
		return;
	}
	else if(b.size()>1)
	{
		cout<<b[1]<<'\n';
		return;
	}
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