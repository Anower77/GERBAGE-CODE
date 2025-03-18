#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;


int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int c = a[n - 1];
        // string result = "";
        vector<int> result;
        
        for (int i = n-1; i >= 0; i--) 
        {
            if (a[i] >= c) c = a[i];
            if (c > 0 && c >= a[i]) 
            {
                result.push_back(1);
                c--;
            } 
            else 
            {
                result.push_back(0);
            }
        }
        
        // Reverse the result string and remove the trailing space
        // cout << result << endl;
        reverse(result.begin(), result.end());
        for(int i=0; i<result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout<<'\n';
    }

    return 0;
}
