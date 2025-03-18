#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

pair<int,int> find_xorry(int x)
{
	int M=0, tmp=x;
	while(tmp)
	{
		M++;
		tmp >>= 1;
	}

	int A = pow(2, M-1);
	int B = x ^ A;

	return make_pair(A,B);
}


int main() 
{
    int t; cin>>t;  
    while(t--)
    {
    	int x; cin>>x;
    	pair<int, int> xorry = find_xorry(x);
    	cout<< xorry.second<< " " << xorry.first<< '\n';
    }

    
    return 0;
}
