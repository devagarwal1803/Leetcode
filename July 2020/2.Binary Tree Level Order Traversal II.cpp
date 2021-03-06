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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q1,q2;
        if(root)
            q1.push(root);
        while(!q1.empty()){
            vector<int>v;
            while(!q1.empty()){
                TreeNode *temp=q1.front();
                v.push_back(temp->val);
                q1.pop();
                if(temp->left)
                    q2.push(temp->left);
                if(temp->right)
                    q2.push(temp->right);
            }
            ans.push_back(v);
            swap(q1,q2);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
