#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, sum = 0;

    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];


    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<bool> t(m, false);
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            if(!t[j] and abs(a[i] - b[j]) <= 1) 
            {
                sum++;
                t[j] = true;
                break;
            }
        }
    }

    cout << sum << '\n';
    return 0;
}
v