# Graph traversals

## Depth-first search

Depth-first search always follows a single path in the graph as long as it finds new nodes. After this, it returns to previous nodes and begins to explore other parts of the graph.

time complexity: $O(n+ m)$

### Implementation

use adjacency list adj and a bool array visited[N]

```cpp
void dfs(int s) {
	if (visited[s]) return;
	visited[s] = true;
	// process node s
	for (auto u: adj[s]) {
			dfs(u);
	}
}
```

## Breadth-first search

Breadth-first search goes through the nodes one level after another. First the search explores the nodes whose distance from the starting node is 1, then the nodes whose distance is 2, and so on. This process continues until all nodes have been visited.

time complexity: O(n+ m)

### Implementation

The following code assumes that the graph is stored as adjacency lists and maintains the following data structures:

```cpp
queue<int> q;
bool visited[N];
int distance[N];
```

The search can be implemented as follows, starting at node x:

```cpp
visited[x] = true;
distance[x] = 0;
q.push(x);
while (!q.empty()) {
	int s = q.front(); q.pop();
	// process node s
	for (auto u : adj[s]) {
		if (visited[u]) continue;
		visited[u] = true;
		distance[u] = distance[s]+1;
		q.push(u);
	}
}
```