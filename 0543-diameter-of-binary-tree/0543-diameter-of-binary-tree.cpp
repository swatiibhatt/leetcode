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
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter =0;
        height(root,diameter);
        return diameter;
    }
    private:
    int height(TreeNode* node,int &diameter)
    {
        if(!node)
        {
            return 0;
        }
        int left_height=height(node->left,diameter);
        int right_height=height(node->right,diameter);
        diameter=max(diameter,(left_height+right_height));
        return 1+max(left_height,right_height);
}
};