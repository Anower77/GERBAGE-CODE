#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void solve()
{
	ll n; cin>>n;
	ll ax, ay, bx, by, cx, cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;

	bool ok = false;

	if((bx < ax and by < ay) and (cx < ax and cy < ay)) ok=true;
	if((bx < ax and by > ay) and (cx < ax and cy > ay)) ok=true;

	if((bx > ax and by < ay) and (cx > ax and cy < ay)) ok=true;
	if((bx > ax and by > ay) and (cx > ax and cy > ay)) ok=true;

	if(ok) cout<<"YES\n";
	else cout<<"NO\n";

}





int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t; cin>>t;
    // while(t--)
    {
    	solve();
    }


    return 0;
}