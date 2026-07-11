void bfs(int start, vector<int> adj[], int n){

    vector<int> vis(n,0);
    queue<int> q;

    q.push(start);
    vis[start]=1;

    while(!q.empty()){

        int node=q.front();
        q.pop();

        cout<<node<<" ";

        for(auto it:adj[node]){

            if(!vis[it]){

                vis[it]=1;
                q.push(it);
            }
        }
    }
}