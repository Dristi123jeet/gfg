/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/
  bool isleaf(Node*root){
      return(root->left==NULL  && root->right==NULL);
  }
  void leftb(Node*root, vector<int>&ans){
      Node*curr= root->left;
      while(curr){
      if(!isleaf(curr)){
          ans.push_back(curr->data);
      }
          if(curr->left)curr=curr->left;
          else curr= curr->right;
      
      }
  }
   void leafn(Node*root, vector<int>&ans){
      
      if(isleaf(root)){
          ans.push_back(root->data);
   }
   if(root->left)leafn(root->left, ans);
   if(root->right)leafn(root->right, ans);
   }
   
   void rightb(Node*root, vector<int>&ans){
       vector<int>temp;
        Node*curr= root->right;
        while(curr){
      if(!isleaf(curr)){
          temp.push_back(curr->data);
      }
          if(curr->right)curr=curr->right;
          else curr= curr->left;
      
        }
       for(int i= temp.size()-1; i>=0; i--){
           ans.push_back(temp[i]);
       }
   }

class Solution {
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
            vector<int>ans;
            if(!root)return  ans;
            if(!isleaf(root))ans.push_back(root->data);
            leftb(root,ans);
            leafn(root,ans);
            rightb(root,ans);
            return ans;
    }
};