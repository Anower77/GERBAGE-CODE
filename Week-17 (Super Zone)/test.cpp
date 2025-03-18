#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


ll compute_sum(vector<ll>& arr) {
    ll n = arr.size();
    ll tol_sum = 0;
    sort(arr.begin(), arr.end());

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            ll abs_diff = abs(arr[i] - arr[j]);
            ll sum_ele = arr[i] + arr[j];
            tol_sum += abs_diff * sum_ele;
        }
    }

    return tol_sum % 1000000007;
}


void solve()
{
    int n; cin>>n;
    vector<ll> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];

    ll res = compute_sum(arr);
    cout<< res <<'\n';

    

}


int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    // int t=1;; //cin>>t;
    // while() solve();
    solve();
    return 0;
}