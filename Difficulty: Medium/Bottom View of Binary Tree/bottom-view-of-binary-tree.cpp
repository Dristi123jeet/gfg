// Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
         vector<int>ans;
        if(!root)return ans;
        queue<pair<Node*, int>>q;
        map<int,int>mpp;
        q.push({root,0});
        while(!q.empty()){
           auto p= q.front();
            q.pop();
            Node* node=p.first;
            int vertical= p.second;
           
                mpp[vertical]=node->data;
            
            if(node->left)q.push({node->left, vertical-1});
            if(node->right)q.push({node->right, vertical+1});
        }
         for(auto it:mpp){
             ans.push_back(it.second);
         }
         return ans;
        
    }
};