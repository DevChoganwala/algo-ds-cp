# Graphs

The sum of degrees in a graph is always 2m, where m is the number of edges

A graph is **regular** if the degree of every node is a constant d. A graph is **complete** if the degree of every node is n−1

It turns out that a graph is bipartite exactly when it does not contain a cycle with an odd number of edges.

## Graph representation

### Adjacency list representation

In the adjacency list representation, each node x in the graph is assigned an adjacency list that consists of nodes to which there is an edge from x.

A convenient way to store the adjacency lists is to declare an array of vectors as follows:

```cpp
vector<int> adj[N];
```

For a weighted graph, the structure can be extended as follows:

```cpp
vector<pair<int,int>> adj[N];
```

the following loop goes through all nodes to which we can move from node s:

```cpp
for (auto u : adj[s]) {
		// process node u
}
```

### Adjacency matrix representation

An adjacency matrix is a two-dimensional array that indicates which edges the graph contains

The matrix can be stored as an array

```cpp
int adj[N][N]; //bool for non weighted
```

The drawback of the adjacency matrix representation is that the matrix contains $n^2$ elements, and usually most of them are zero. For this reason, the representation cannot be used if the graph is large.

### Edge list representation

An edge list contains all edges of a graph in some order. This is a convenient way to represent a graph if the algorithm processes all edges of the graph and it is not needed to find edges that start at a given node.

The edge list can be stored in a vector

```cpp
vector<pair<int,int>> edges;
```

for weighted graphs

```cpp
vector<tuple<int,int,int>> edges;
```