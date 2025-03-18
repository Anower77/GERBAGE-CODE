#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll N = 1e5+5;

int arr[N];
int tree[N*3];


void init(int node, int b, int e)
{
	if(b==e)
	{
		tree[node] = arr[b];
		return;
	}

	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;

	init(Left, b, mid);
	init(Right, mid+1, e);

	tree[node] = tree[Left] + tree[Right];
	


}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
    	solve();
    }


    return 0;
}