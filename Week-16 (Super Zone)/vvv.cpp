#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);  

    int n,m; cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>arr[i][j];
    }

    int pre[n][m]; // assign prefix sum
    pre[0][0] = arr[0][0]; // Initially all elements ZERO
    for(int i=1; i<m; i++) pre[0][i] = pre[0][i-1] + arr[0][i]; // prefix row
    for(int i=1; i<n; i++) pre[i][0] = pre[i-1][0] + arr[i][0]; // prefix colume


    //  2D-Prefix Sum
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            pre[i][j] = pre[i][j-1] + pre[i-1][j] + arr[i][j] - pre[i-1][j-1];
        }
    }

    // Output
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cout<<pre[i][j]<<" ";
        cout<< '\n';
    }


    return 0;
}

//  ED7BA470-8E54-465E-825C-99712043E01C





// for ammu
// https://www.youtube.com/watch?v=zJweo1IOYV8