class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        int v= adj.size();
        vector<int> vis(v,0); 
        queue<int>q;
         vis[0] =1;
        q.push(0);
        vector<int>bfs;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            bfs.push_back(node);
            for(auto it: adj[node]){
                if(!vis[it])
                {
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return bfs;
    }
};