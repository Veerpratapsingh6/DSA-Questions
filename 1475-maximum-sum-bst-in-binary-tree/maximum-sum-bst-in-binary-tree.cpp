/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 class info{
    public:
        int max_num;
        int min_num;
        bool isBST;
        int sum;
 };

 info solve(TreeNode* root,int &max_sum){
    if(root==NULL){
        return {INT_MIN,INT_MAX,true,0};
    }

    info left=solve(root->left,max_sum);
    info right=solve(root->right,max_sum);

    info curr;

    curr.sum=left.sum+right.sum+root->val;
    curr.min_num=min(root->val,left.min_num);
    curr.max_num=max(root->val,right.max_num);
    curr.isBST=false;

    if(left.isBST&&right.isBST&&root->val>left.max_num&&root->val<right.min_num){
        curr.isBST=true;
        max_sum=max(max_sum,curr.sum);
    }
    return curr;
 }


class Solution {
public:
    int maxSumBST(TreeNode* root) {
        int max_sum=0;
        info temp= solve(root,max_sum);
        return max_sum;
    }
};