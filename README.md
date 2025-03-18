# Shortest Path in an Undirected Graph using BFS

## Problem Statement
You are given an undirected graph as input. Then you will be given a query `Q`. For each query, you will be given a source `S` and a destination `D`. You need to print the shortest distance between `S` and `D`. If there is no path from `S` to `D`, print `-1`.

## Sample Input/Output

### **Input:**
```
6 7
0 1
0 2
1 2
0 3
4 2
3 5
4 3
6
0 5
1 5
2 5
2 3
1 4
0 0
```

### **Output:**
```
2
3
3
2
2
0
```

### **Input:**
```
7 5
0 1
0 2
4 5
4 6
5 7
3
0 4
5 1
1 3
```

### **Output:**
```
-1
-1
-1
```

## Approach
1. **Graph Representation**: The graph is represented as an adjacency list.
2. **Breadth-First Search (BFS)**: We use BFS since it finds the shortest path in an unweighted graph.
3. **Tracking Parents**: A `parent` array stores the parent of each node to help trace the path.
4. **Distance Calculation**: We backtrack from the destination to the source to determine the shortest path length.

## Implementation

```cpp
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

    int N, E; cin >> N >> E;

    while(E--) {
    	int A, B; cin >> A >> B;
    	adj[A].push_back(B);
    	adj[B].push_back(A);
    }

    int query; cin >> query;

    while (query--) {
    	int query_S, query_D; cin >> query_S >> query_D;
	    memset(vis, false, sizeof(vis));
	    memset(parent, -1, sizeof(parent));
    	
    	BFS(query_S);

    	int xx = query_D, cnt = -1;

    	while( xx != -1 ) {
    		cnt++;
    		xx = parent[xx];
    	}

    	if(query_S == query_D)
			cout << 0 << '\n';
		else if (parent[query_D] == -1)
			cout << -1 << '\n';
		else
			cout << cnt << '\n';
    }

    return 0;
}
```

## How to Run
1. Compile the code using a C++ compiler:
   ```sh
   g++ shortest_path_bfs.cpp -o shortest_path_bfs
   ```
2. Run the program and provide input:
   ```sh
   ./shortest_path_bfs < input.txt
   ```
   Or manually enter input values.

## Complexity Analysis
- **BFS Complexity**: `O(V + E)`, where `V` is the number of vertices and `E` is the number of edges.
- **Space Complexity**: `O(V + E)` for storing the adjacency list.

## Edge Cases Considered
- When `S == D`, the shortest distance is `0`.
- When `S` and `D` belong to disconnected components, return `-1`.
- Handling graphs with multiple connected components.

