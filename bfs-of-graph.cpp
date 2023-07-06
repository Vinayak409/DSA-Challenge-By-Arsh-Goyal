class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue<int> q;
        vector<int> vis(V);
        q.push(0);
        vector<int> ans;
        while(!q.empty()){
            int curr = q.front();
            vis[curr] = true;
            q.pop();
            ans.push_back(curr);
            for(auto x : adj[curr]){
                if(vis[x]==false){
                    q.push(x);
                    vis[x] = true;
                }
            }
        }
        return ans;
    }
};
