#include "bits/stdc++.h"
#define ll long long
using namespace std;
const ll N = 0e5+5;


void solve()
{
        string s; cin>>s;
        string s1,s2;

        bool ok = false;
        s1 += s[0];

        for(int i=1; i<s.size(); i++)
        {
                if(s[i] != '0' or ok)
                {
                        s2 += s[i];
                        ok  = true;
                }
                else s1 += s[i];
        }

        if(s2.size()==0) s2 += '0';
        ll a = stoi(s1);
        ll b = stoi(s2);

        if(b>a and a!=0 and b!=0) cout<<a<<" "<<b<<'\n';
        else cout<<"-1"<<'\n';


}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t; cin>>t;
    while(t--) solve();
    return 0;
}