#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


void min_cost(int t, pair<int, pair<int, int>> cases[]) 
{
    for (int i = 0; i < t; ++i) 
    {
        int n = cases[i].first;
        int a = cases[i].second.first;
        int b = cases[i].second.second;
        if (n % 2 == 0) 
        { 
            cout << min(n * a, (n / 2) * b) << '\n';
        } 
        else 
        {  
            cout << min(n * a, ((n - 1) / 2) * b + a) << '\n';
        }
    }
}

int main() 
{
    int t; cin >> t;  
    pair<int, pair<int, int>> cases[t];
    for (int i = 0; i < t; ++i) 
    {
        int n, a, b;
        cin >> n >> a >> b;
        cases[i] = make_pair(n, make_pair(a, b));
    }
    min_cost(t, cases);
    return 0;
}
