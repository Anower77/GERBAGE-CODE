#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	string a,b; cin>>a>>b;
	if(a[0]==b[0])
	{
		cout<< "YES\n" << a[0] << "*\n";
		return;
	}
	
	if(a.back() == b.back())
	{
		cout<< "YES\n*" << a.back() << "\n";
		return;
	}


	for(int i=0; i<a.size()-1; i++)
	{
		for(int j=0; j<b.size()-1; j++)
		{
			if(a[i] == b[j] and a[i+1]==b[j+1])
			{
				cout<< "YES\n*" << a[i] << a[i+1] << "*\n";
				return;
			}
		}
	}

	cout<<"NO\n";
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