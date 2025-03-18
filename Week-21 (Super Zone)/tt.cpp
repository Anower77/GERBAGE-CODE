#include "bits/stdc++.h"
#define ll long long 
using namespace std;
const ll MAX_N = 1e5+5;

vector<int> adj[MAX_N];
bool vis[MAX_N];
int parent[MAX_N];

void BFS(int query_S) {
	queue<int> q;
	q.push(query_S);
	vis[query_S] = true;

	while(!q.empty()) {
		int par = q.front();
		q.pop();

		for(int child: adj[par]) {
			if(!vis[child]) {
				q.push(child);
				vis[child] = true;
				parent[child] = par;
			}
		}
	}
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, E; cin >> N >> E ;

    while(E--) {
    	int A, B; cin >> A >> B ;

    	adj[A].push_back(B);
    	adj[B].push_back(A);
    }

    int query; cin>> query;

    while (query--) {
    	
    	int query_S, query_D; cin>> query_S >> query_D;
	    memset(vis, false, sizeof(vis));
	    memset(parent, -1, sizeof(parent));
    	
    	BFS(query_S);

    	int xx = query_D, cnt = -1;

    	while( xx != -1 ) {
    		// cout<< xx << '\n';
    		cnt++;
    		xx = parent[xx];

    	}

    	
    	if(query_S==query_D)
			cout << 0 << '\n';
		else if (parent[query_D] == -1)
			cout << -1 << '\n';
		else
			cout << cnt << '\n';

    }

    return 0;
}