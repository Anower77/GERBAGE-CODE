#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e5 + 5;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin >>a[i];

            
        int bit = -1;
        for (int i=0; i<n; i++)
        {
    		if((a[i] & b) == b)
    		{
    			bit &= a[i];
    		}	
        }


        if (bit == b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
