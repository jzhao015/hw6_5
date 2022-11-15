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
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0; //the tree's depth will be zero if it is an empty tree
        int left_h = maxDepth(root->left);//using recursive to calculate the number of node of the left part of the subtree 
        int right_h = maxDepth(root->right); // using recursive to calculate the depth/number of node of the right subtree
        int totaldepth = max(left_h, right_h) + 1; // the max() will get whatever is the largest and plus 1(the root), which is the max depth of the tree. 
     
        
        return totaldepth;
    }
};
