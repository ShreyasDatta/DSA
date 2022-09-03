# Types of Binary Tree
- Full Binary Tree
- Perfect Binary Tree
- Complete Binary Tree
- Degenerate or Pathological Tree
- Skewed Binary Tree
- Balanced Binary Tree

`Full/Strict Binary Tree`
Either 0 or 2 children for each node
<img src="https://cdn.programiz.com/sites/tutorial2program/files/full-binary-tree_0.png" width="100px"></img>

                                                       18
                18                                   /    \  
             /     \                                15     20    
           15       30                             /  \   
          /  \     /   \                         40    50   
        40    50  100   40                      


`Perfect Binary Tree Theorems`
A Binary tree is a Perfect Binary Tree in which all the internal nodes have two children and all leaf nodes are at the same level. 
A perfect binary tree of height h has 2h + 1 – 1 node.
A perfect binary tree with n nodes has height log(n + 1) – 1 = Θ(ln(n)).
A perfect binary tree of height h has 2h leaf nodes.
The average depth of a node in a perfect binary tree is Θ(ln(n)).

               18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40


`Complete Binary Tree`
Every level must be completely filled
All the leaf elements must lean towards the left.
The last leaf element might not have a right sibling i.e. a complete binary tree doesn’t have to be a full binary tree.

             18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40
     /  \   /
    8   7  9 


`Degenerate Tree`
Every parent node must have exacyly one child node

`Skew Tree`
- Left Skew Tree - Degenerate tree skewed to left
- Right Skew Tree - Degenerate tree skewed to Right
  
      10                                           10
      /                                             \
    20                                               20
    /                                                 \
  30                                                   30
  /                                                     \
 40                                                      40
Left-Skewed Binary Tree                               Right-Skewed Binary Tree
