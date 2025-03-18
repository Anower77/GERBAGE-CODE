#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

void solve()
{
	ll n; cin>>n;
	vector<ll> ball(n);
	for (ll i=0; i<n; i++) cin>>ball[i];
	sort(ball.rbegin(), ball.rend());


	ll tol_ball = 0;
	ll mx_dic = ball[0];


	for(ll i=0; i<n; i++)
	{

		if(ball[i] > mx_dic) ball[i] = mx_dic;
		if(ball[i] > 0) 
		{
			tol_ball += ball[i];
			mx_dic = ball[i] - 1;
		}	
	}

	cout<< tol_ball <<'\n';
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}