# Binary Trees

`Applications of Binary Tree:`

- In compilers, Expression Trees are used which is an application of binary tree.
- Huffman coding trees are used in data compression algorithms.
- Priority Queue is another application of binary tree that is used for searching maximum or minimum in O(1) time complexity.

## Full Binary Tree

<img src="https://cdn.programiz.com/sites/tutorial2program/files/full-binary-tree_0.png" width="100"></br>

- A full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.
- It is also known as a proper binary tree.

`Theorems`
```
i = the number of internal nodes
n = be the total number of nodes
l = number of leaves
λ = number of levels
```
- The number of leaves is `i + 1`.
- The total number of nodes is `2i + 1`.
- The number of internal nodes is `(n – 1) / 2`.
- The number of leaves is `(n + 1) / 2`.
- The total number of nodes is `2l – 1`.
- The number of internal nodes is `l – 1`.
- The number of leaves is at most `2λ - 1`.

```
// Checking if a binary tree is a full binary tree in C++
bool isFullBinaryTree(struct Node *root) {
  // Checking for emptiness
  if (root == NULL)
    return true;

  // Checking for the presence of children
  if (root->left == NULL && root->right == NULL)
    return true;

  if ((root->left) && (root->right))
    return (isFullBinaryTree(root->left) && isFullBinaryTree(root->right));

  return false;
}
```

## Balanced Binary Tree

<img src="https://user-images.githubusercontent.com/60508703/188283942-8120cf10-005c-4c49-abe3-f0386fe1bb48.png" width="100"></br>

A balanced binary tree, also referred to as a height-balanced binary tree, is defined as a binary tree in which the height of the left and right subtree of any node differ by not more than 1.

```
// Check height balance
bool checkHeightBalance(node *root, int *height) {
  // Check for emptiness
  int leftHeight = 0, rightHeight = 0;

  int l = 0, r = 0;

  if (root == NULL) {
    *height = 0;
    return 1;
  }

  l = checkHeightBalance(root->left, &leftHeight);
  r = checkHeightBalance(root->right, &rightHeight);

  *height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

  if (std::abs(leftHeight - rightHeight >= 2))
    return 0;

  else
    return l && r;
}
```

## Binary Search Tree (BST)

<img src="https://cdn.programiz.com/sites/tutorial2program/files/bst-vs-not-bst.png" width="100"></br>

Binary search tree is a data structure that quickly allows us to maintain a sorted list of numbers.

- It is called a binary tree because each tree node has a maximum of two children.
- It is called a search tree because it can be used to search for the presence of a number in O(log(n)) time.

The properties that separate a binary search tree from a regular binary tree is
> All nodes of left subtree are less than the root node
> All nodes of right subtree are more than the root node
> Both subtrees of each node are also BSTs i.e. they have the above two properties
