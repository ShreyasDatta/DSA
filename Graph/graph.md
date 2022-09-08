# Graph

A graph data structure is a collection of nodes that have data and are connected to other nodes.

More precisely, a graph is a data structure (V, E) that consists of
- A collection of vertices V
- A collection of edges E, represented as ordered pairs of vertices (u,v)

<img src="https://cdn.programiz.com/sites/tutorial2program/files/graph-vertices-edges_0.png" width="400px"></img>
```
In this graph,

V = {0, 1, 2, 3}
E = {(0,1), (0,2), (0,3), (1,2)}
G = {V, E}
```

## Graph Terminology

- `Adjacency`: A vertex is said to be adjacent to another vertex if there is an edge connecting them. Vertices 2 and 3 are not adjacent because there is no edge between them.
- `Path`: A sequence of edges that allows you to go from vertex A to vertex B is called a path. 0-1, 1-2 and 0-2 are paths from vertex 0 to vertex 2.
- `Directed Graph`: A graph in which an edge (u,v) doesn't necessarily mean that there is an edge (v, u) as well. The edges in such a graph are represented by arrows to show the direction of the edge.  Here edges have a direction

## Graph Representation

Graphs are commonly represented in two ways:
`Adjacency Matrix` 
- An adjacency matrix is a 2D array of V x V vertices. Each row and column represent a vertex.
- If the value of any element a[i][j] is 1, it represents that there is an edge connecting vertex i and vertex j.
<img src="https://cdn.programiz.com/sites/tutorial2program/files/adjacency-matrix_1.png" width="400px"></img>

`Adjacency List`
- An adjacency list represents a graph as an array of linked lists.\
- The index of the array represents a vertex and each element in its linked list represents the other vertices that form an edge with the vertex.
<img src="https://cdn.programiz.com/sites/tutorial2program/files/adjacency-list.png" width="400px"></img>
