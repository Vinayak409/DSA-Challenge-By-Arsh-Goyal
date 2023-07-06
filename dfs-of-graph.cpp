class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int start, vector<int> *adj, bool *vis, vector<int> &ans){
        vis[start] = true;
        ans.push_back(start);
        for(int i=0; i<adj[start].size(); i++){
            if(vis[adj[start][i]] == false){
                dfs(adj[start][i], adj, vis, ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int start = 0;
        bool vis[V] = {false};
        vector<int> ans;
        dfs(start, adj, vis, ans);
        return ans;
    }
};
