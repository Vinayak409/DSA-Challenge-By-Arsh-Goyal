class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int node, vector<int> *adj, vector<bool> &vis, vector<bool> &recS){
        vis[node] = true;
        recS[node] = true;
        
        for(auto nbr : adj[node]){
            if(!vis[nbr]){
                if(dfs(nbr, adj, vis, recS) == true){
                    return true;
                }
            }else if(recS[nbr] == true){
                return true;
            }
        }
        recS[node] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V, false);
        vector<bool> recS(V, false);
        
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, recS) == true){
                    return true;
                }
            }
        }
        return false;
    }
};
