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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if (!root){
            return;
        }
        
        queue <TreeNode*> q;
        q.push(root);
        //q.push(NULL);
        while(!q.empty()){
            int sz=q.size();
            TreeNode* t;
           // v.push_back(t->val);
            for(int i=0; i<sz;i++){
                t=q.front();
                q.pop();
                if(t->right){
                    q.push(t->right);
                }
                if(t->left){
                    q.push(t->left);
                }
                
                
            }
        }
        cout<<t->data<<" ";
         
        
    }
};