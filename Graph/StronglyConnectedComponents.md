# Strongly Connected Components

A strongly connected component is the portion of a directed graph in which there is a path from each vertex to another vertex. It is applicable only on a directed graph.

For example:

<img src="https://cdn.programiz.com/sites/tutorial2program/files/scc-initial-graph.png" width="400px">
Initial graph
<img src="https://cdn.programiz.com/sites/tutorial2program/files/scc-strongly-connected-components.png" width="400px">
- Strongly connected components
- every vertex can reach the other vertex through the directed path.
- These components can be found using Kosaraju's Algorithm.

## Kosaraju's Algorithm

Kosaraju's Algorithm is based on the depth-first search algorithm implemented twice.
> Three steps are involved.
> - Perform a depth first search on the whole graph.
> - Reverse the original graph
> - Perform depth-first search on the reversed graph.

Kosaraju's algorithm runs in linear time i.e. O(V+E).

`Strongly Connected Components Applications`
>Vehicle routing applications
>Maps
>Model-checking in formal verification
