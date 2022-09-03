# Types of Trees

## 1. General tree
A general tree data structure has no restriction on the number of nodes. It means that a parent node can have any number of child nodes.  

## 2. Binary tree  
A node of a binary tree can have a maximum of two child nodes. In the given tree diagram, node B, D, and F are left children, while E, C, and G are the right children. 
</br></br>
`Full/Strict Binary Tree`
> Either 0 or 2 children for each node

                                                       18
                18                                   /    \  
             /     \                                15     20    
           15       30                             /  \   
          /  \     /   \                         40    50   
        40    50  100   40                      


`Perfect Binary Tree Theorems`
> - A Binary tree is a Perfect Binary Tree in which all the internal nodes have two children and all leaf nodes are at the same level. 
> - A perfect binary tree of height h has 2h + 1 – 1 node.
> - A perfect binary tree with n nodes has height log(n + 1) – 1 = Θ(ln(n)).
> - A perfect binary tree of height h has 2h leaf nodes.
> - The average depth of a node in a perfect binary tree is Θ(ln(n)).

               18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40


`Complete Binary Tree`
> - Every level must be completely filled
> - All the leaf elements must lean towards the left.
> - The last leaf element might not have a right sibling i.e. a complete binary tree doesn’t have to be a full binary tree.
```
             18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40
     /  \   /
    8   7  9 
```

`Degenerate Tree`
> - Every parent node must have exacyly one child node

`Skew Tree`
> - Left Skew Tree - Degenerate tree skewed to left
> - Right Skew Tree - Degenerate tree skewed to Right
```  
      10                                           10
      /                                             \
    20                                               20
    /                                                 \
  30                                                   30
  /                                                     \
 40                                                      40
Left-Skewed Binary Tree                               Right-Skewed Binary Tree
```

## 3. Balanced tree
If the height of the left sub-tree and the right sub-tree is equal or differs at most by 1, the tree is known as a balanced tree.  
<img src="https://media.geeksforgeeks.org/wp-content/uploads/20220614001043/upload.png" width="200px"></img>

## 4. Binary search tree
As the name implies, binary search trees are used for various searching and sorting algorithms. The examples include AVL tree and red-black tree. It is a non-linear data structure. It shows that the value of the left node is less than its parent, while the value of the right node is greater than its parent.

- `AVL Tree`
- `Red Black-Tree`
