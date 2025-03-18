#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with.stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        string a,b; cin>>a>>b;
        int lcs =0;

        for (int i=0; i<a.size(); i++)
        {
            for(int j=0; j<b.size(); j++)
            {
                int x=i, y=j;
                int len = 0;

                while(x<a.size() and y<b.size() and (a[x++] == b[y++]))
                {
                    len++;
                }
                lcs = max(len,lcs);
            }
        }

        cout<< a.size() + b.size() - (2*lcs) << '\n';

    }


    return 0;
}