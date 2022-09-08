# Red-Black Tree

<a href="https://www.programiz.com/dsa/red-black-tree">More...</a>

Red-Black tree is a self-balancing binary search tree in which each node contains an extra bit for denoting the color of the node, either red or black.

`A red-black tree satisfies the following properties:`

> - Red/Black Property: Every node is colored, either red or black.
> - Root Property: The root is black.
> - Leaf Property: Every leaf (NIL) is black.
> - Red Property: If a red node has children then, the children are always black.
> - Depth Property: For each node, any simple path from this node to any of its descendant leaf has the same black-depth (the number of black nodes).

<img src="https://cdn.programiz.com/sites/tutorial2program/files/red-black-tree_0.png" width="400px"></img>

`How the red-black tree maintains the property of self-balancing?`
*The red-black color is meant for balancing the tree.*
*The limitations put on the node colors ensure that any simple path from the root to a leaf is not more than twice as long as any other such path.*
*It helps in maintaining the self-balancing property of the red-black tree.*
