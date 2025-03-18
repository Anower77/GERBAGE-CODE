#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // ll n=3; //cin>>n;
    // cout<<2*n<<'\n';

    int a=3,b=5; //cin>>a>>b>>c;

    a = a-b; // -2
    b = a+b; //  3
    a = b-a; //  5

    cout<<"a = "<<a<<"\n"<<"b = "<<b;



    return 0;
}