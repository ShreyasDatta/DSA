# AVL Tree
<a src='https://www.programiz.com/dsa/avl-tree'>More</a>

- AVL tree is a self-balancing binary search tree in which each node maintains extra information called a balance factor whose value is either -1, 0 or +1.
- AVL tree got its name after its inventor Georgy Adelson-Velsky and Landis.

`Balance factor`
```
Balance factor = Height of left subtree - Height of right subtree

bf=hl-hr = {-1,0,1}
|bf|=|hl-hr|<=1
```

`Rotating the subtrees in an AVL Tree`
- In rotation operation, the positions of the nodes of a subtree are interchanged.
- Rotations done only on 3 node tree
- Types of rotations:
-- Left Rotate
-- Right Rotate
-- Left-Right
-- Right-Left Rotate
