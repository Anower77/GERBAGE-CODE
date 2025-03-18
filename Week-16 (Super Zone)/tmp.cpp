#include "bits/stdc++.h"
using namespace std;
#define mx 100001

int arr[mx];
int tree[mx * 3];


// Initialization Segment-Tree
// 		     1        1      n
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
	init(Right, mid + 1, e);
	tree[node] = tree[Left] + tree[Right];

}



// Query 
int query(int node, int b, int e, int i, int j)
{

	if(i > e || j < b) return 0; // out fo area
	if(b >= i && e <= j) return tree[node]; // relavent segment

	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;
	int p1 = query(Left, b, mid, i, j);
	int p1 = query(Right, mid + 1, e, i, j);
	return p1 + p2;

}



// Updation
void update(int node, int b, int e, int i, int newValue)
{

	if(i > e || i < b) return; // out of the area
	if(b >= i && e <= i) 
	{
		tree[node] = newValue; // insert new value
		return; 
	}

	int Left = node * 2;
	int Right = node * 2 + 1;
	int mid = (b + e) / 2;
	update(Left, b, mid, i, newValue);
	update(Right, mid + 1, e, i, newValue);
	tree[node] = tree[Left] + tree[Right];

}





int main()
{
	// READ("in");
	int n; cin>>n;
	for(int i=0; i<n; i++) cin>>arr[i];
	
	init(1, 1, n);

	update(1, 1, n, 2, 0);
	cout<< query(1, 1, n, 1, 3) << '\n';

	update(1, 1, n, 2, 2);
	cout<< query(1, 1, n, 2, 2) << '\n';

    return 0;
}



