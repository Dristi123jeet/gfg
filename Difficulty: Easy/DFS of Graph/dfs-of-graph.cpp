class Solution {
private:
    void helper(vector<vector<int>>& adj, vector<int>& ans, int node, vector<int>& vis) {
        vis[node] = 1;
        ans.push_back(node);
        for (auto it : adj[node]) {
            if (!vis[it]) {
                helper(adj, ans, it, vis);
            }
        }
    }

public:
    vector<int> dfs(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> vis(n, 0);
        vector<int> ans;
        int start = 0; // Start from node 0
        helper(adj, ans, start, vis);
        return ans;
    }
};
