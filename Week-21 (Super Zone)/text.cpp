#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int fact(int n) {
	if(n==1 or n==0) return 1;
	else return n-- * fact(n);
	// return (n) * fact(n-1);
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;

    cout<<fact(n);
    

    return 0;
}