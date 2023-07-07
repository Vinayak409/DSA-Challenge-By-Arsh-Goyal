class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int node, vector<int> *adj, vector<bool> &vis, int parent){
        vis[node] = true;
        
        for(auto nbr : adj[node]){
            if(!vis[nbr]){
                if(dfs(nbr, adj, vis, node) == true){
                    return true;
                }
            }else if(parent != nbr){
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> vis(V, false);
        
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, -1) == true){
                    return true;
                }
            }
        }
        return false;
    }
};
