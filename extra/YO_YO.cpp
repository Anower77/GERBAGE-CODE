#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


bool prime(ll n)
{
    if(n<=1) return false;

    for(ll i=2; i<=sqrt(n); i++)
    {
        if(n%i==0) return false;
    }

    return true;
}


// generate prime
vector<ll> genPrime(ll cnt)
{
    vector<ll> p;
    ll num =2;
    while(p.size() < cnt)
    {
        if(prime(num)) p.push_back(num);
        num++;
    }

    return p;
}



vector<vector<ll>> genSpi(ll n)
{
    vector<ll> p = genPrime(n*n);
    vector<vector<ll>> mat(n, vector<ll>(n));

    ll t=0, b=n-1, l=0, r=n-1;
    ll idx=0;

    while(t <= b and l <= r)
    {
        for(ll i=l; i<=r; i++)
        {
            mat[t][i] = p[idx++];
        }
        t++;


        for(ll i=t; i<=b; i++)
        {
            mat[i][r] = p[idx++];
        }
        r--;

        if(t<=b)
        {
            for(ll i=r; i>=l; i--)
            {
                mat[b][i] = p[idx++];
            }
            b--;
        }

        if(l<=r)
        {
            for(ll i=b; i>=t; i--)
            {
                mat[i][l] = p[idx++];
            }
            l++;
        }
    }

    return mat;
}





void solve(vector<vector<ll>>& mat)
{
    for(auto& row: mat)
    {
        for(int num : row)
        {
            cout<< num << " ";
        }
        cout<<'\n';
    }
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<vector<ll>> matt = genSpi(n);
    solve(matt);

    return 0;
}