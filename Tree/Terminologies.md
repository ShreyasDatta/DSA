# Basic Terminologies In Tree Data Structure:
<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20201129105858/Tree-Basic-Terminology.png" width="700px"></img>

- `Parent Node:` The node which is a predecessor of a node is called the parent node of that node. {2} is the parent node of {6, 7}.
- `Child Node:` The node which is the immediate successor of a node is called the child node of that node. Examples: {6, 7} are the child nodes of {2}.
- `Root Node:` The topmost node of a tree or the node which does not have any parent node is called the root node. {1} is the root node of the tree. A non-empty tree must contain exactly one root node and exactly one path from the root to all other nodes of the tree.
- `Leaf Node or External Node:` The nodes which do not have any child nodes are called leaf nodes. {6, 14, 8, 9, 15, 16, 4, 11, 12, 17, 18, 19} are the leaf nodes of the tree.
- `Ancestor of a Node:` Any predecessor nodes on the path of the root to that node are called Ancestors of that node. {1, 2} are the ancestor nodes of the node {7}
- `Descendant:` Any successor node on the path from the leaf node to that node. {7, 14} are the descendants of the node. {2}.
- `Sibling:` Children of the same parent node are called siblings. {8, 9, 10} are called siblings.
- `Level of a node:` The count of edges on the path from the root node to that node. The root node has level 0.
- `Internal node:` A node with at least one child is called Internal Node.
- `Neighbour of a Node:` Parent or child nodes of that node are called neighbors of that node.
- `Subtree:` Any node of the tree along with its descendant.

# Properties of a Tree:
- `Number of edges:` An edge can be defined as the connection between two nodes. If a tree has N nodes then it will have (N-1) edges. There is only one path from each node to any other node of the tree.
- `Depth of a node:` The depth of a node is defined as the length of the path from the root to that node. Each edge adds 1 unit of length to the path. So, it can also be defined as the number of edges in the path from the root of the tree to the node.
- `Height of a node:` The height of a node can be defined as the length of the longest path from the node to a leaf node of the tree.
- `Height of the Tree:` The height of a tree is the length of the longest path from the root of the tree to a leaf node of the tree.
- `Degree of a Node:` The total count of subtrees attached to that node is called the degree of the node. The degree of a leaf node must be 0. The degree of a tree is the maximum degree of a node among all the nodes in the tree.


# Applications of Tree data structure:
The applications of tree data structures are as follows:

1. `Spanning trees:` It is the shortest path tree used in the routers to direct the packets to the destination.  

2. `Binary Search Tree:` It is a type of tree data structure that helps in maintaining a sorted stream of data.  
- Full Binary tree
- Complete Binary tree
- Skewed Binary tree
- Stickily Binary tree
- Extended Binary tree

3. `Storing hierarchical data:` Tree data structures are used to store the hierarchical data, which means data is arranged in the form of order.  

4. `Syntax tree:` The syntax tree represents the structure of the program’s source code, which is used in compilers.  

5. `Trie:` It is a fast and efficient way for dynamic spell checking. It is also used for locating specific keys from within a set.  

6. `Heap:` It is also a tree data structure that can be represented in a form of an array. It is used to implement priority queues.  

