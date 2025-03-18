#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;



bool prime(int n)
{
	if(n <= 1) return false;
	if(n <= 3) return true;
	if(n%2==0 or n%3==0) return false;

	for(int i=5; i*i<=n; i++)
	{
		if(n%i==0 or n%(i+2)==0) return false;
	}
	return true;
}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    if(prime(n))
    {
    	cout<<1<<'\n';
    }
    else if((n%2==0) or prime(n-2))
    {
    	cout<<2<<'\n';
    }
    else 
    {
    	cout<<3<<'\n';
    }



    return 0;
}