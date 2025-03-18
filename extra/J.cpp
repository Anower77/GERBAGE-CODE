#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void count_xorry()
{
	int n; cin>>n;
	int a=1, b=0, cnt=0;

	while(a*2<=n)
	{
		a = a*2;
		cnt++;
	}

	int ans=1;
	bool check=false;
	for(int i=cnt-1; i>=0; i--)
	{
		if(n & 1<<i)
		{
			b = b|(1<<i);
			check= true;
		}
		else
		{
			if(check) ans = ans*2;
		}
	}
	cout<<ans<<'\n';
	// return pow(2, cnt -1);
}


int main() 
{
    int t; cin>>t;  
    while(t--)
    {
    	// int x; cin>>x;
     	count_xorry();
    }

    
    return 0;
}
