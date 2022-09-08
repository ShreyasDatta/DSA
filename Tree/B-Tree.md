# B-tree

<a src='https://www.programiz.com/dsa/b-tree'>More...</a>

- B-tree is a special type of self-balancing search tree in which each node can contain more than one key and can have more than two children. It is a generalized form of the binary search tree.
- It is also known as a height-balanced m-way tree.

<img src='https://cdn.programiz.com/sites/tutorial2program/files/b-tree.png' width="400px"></img>

- The need for B-tree arose with the rise in the need for lesser time in accessing the physical storage media like a hard disk. 
- The secondary storage devices are slower with a larger capacity. 
- There was a need for such types of data structures that minimize the disk accesses.
- B-tree can store many keys in a single node and can have multiple child nodes. This decreases the height significantly allowing faster disk accesses.

`B-tree Properties`
- For each node x, the keys are stored in increasing order.
- In each node, there is a boolean value `x.leaf` which is true if x is a leaf.
- If n is the order of the tree, each internal node can contain at most `n - 1` keys along with a pointer to each child.
- Each node except root can have at most n children and at least `n/2` children.
- All leaves have the same depth (i.e. height-h of the tree).
- The root has at least 2 children and contains a minimum of 1 key.
- If `n ≥ 1`, then for any n-key B-tree of height h and minimum degree `t ≥ 2`, `h ≥ logt (n+1)/2`.

<img src='https://cdn.programiz.com/sites/tutorial2program/files/B-tree.png' width="400px"></img>
