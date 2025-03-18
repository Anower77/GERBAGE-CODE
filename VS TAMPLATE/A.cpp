#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 4e5 +5;
typedef pair<int,int> pii;



void TEST_CASES()
{
    int x=10, y=34;
    vector<int> a = {3,4,6};
    debug(x,a,y)
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    // cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}
