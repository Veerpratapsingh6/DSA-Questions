# Is Binary Tree Heap

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the  **root** of a binary tree, and the task is to determine whether it satisfies the properties of a  **max-heap**.

A binary tree is considered a max-heap if it satisfies the following conditions:

- Completeness: Every level of the tree, except possibly the last, is completely filled, and all nodes are as far left as possible.
- Max-Heap Property: The value of each node is greater than or equal to the values of its children.

 **Examples:** 

```
Input: root = [97, 46, 37, 12, 3, 7, 31, 6, 9]
 
Output: true
Explanation: The tree is complete and satisfies the max-heap property.

```

```
Input: root = [97, 46, 37, 12, 3, 7, 31, N, N, 2, 4]
 
Output: false
Explanation: The tree is not complete and does not follow the Max-Heap Property, hence it is not a max-heap.
```

 **Constraints:** 
1 ≤ number of nodes ≤ 103
1 ≤ node->data ≤ 103

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T10:19:10.620Z  

```cpp
/*
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
    int count_node(Node* tree){
        if(tree==NULL){
            return 0;
        }
        return 1+count_node(tree->left)+count_node(tree->right);
    }
    
    bool is_cbt(Node* root, int idx, int node_count){
        if(root==NULL){
            return true;
        }
        if(idx>node_count-1){
            return false;
        }
        else{
            bool left=is_cbt(root->left,2*idx+1,node_count);
            bool right=is_cbt(root->right,2*idx+2,node_count);
            return (left&&right);
        }
    }
    
    bool is_maxHeap(Node* root){
        if(root==NULL){
            return true;
        }
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        if(root->right==NULL){
            return (root->data > root->left->data);
        }
        else{
            bool left=is_maxHeap(root->left);
            bool right=is_maxHeap(root->right);
            return (left && right && (root->data > root->left->data && root->data > root->right->data));
        }
    }
  
  
    bool isHeap(Node* tree) {
        // code here
        int idx=0;
        int node_count=count_node(tree);
        if(is_cbt(tree,idx,node_count)&&is_maxHeap(tree)){
            return true;
        }
        return false;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1)