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
    pair<int,int> solve(TreeNode* root,int &ans){
        if(root==NULL)
            return {INT_MAX,INT_MIN};
        
        pair<int,int> left = solve(root->left,ans);
        pair<int,int> right = solve(root->right,ans);

        int mini = min(left.first,right.first);
        int maxi = max(left.second,right.second);

        if(mini<root->val){
            ans=max(ans,root->val-mini);
        }
        if(maxi>root->val){
            ans = max(ans,maxi-root->val);
        }
        return {min(mini,root->val),max(maxi,root->val)};

    }
    int maxAncestorDiff(TreeNode* root) {
        int ans=INT_MIN;
        int curr = root->val;
        pair<int,int> temp = solve(root,ans);
        return ans;
    }
};