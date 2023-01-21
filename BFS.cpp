/*
BFS Traversal
it start traversing the graph from a specific
node called the source node
the level of the source node can be chosen arbitrary(assume node 0)
Each node is visited once
Traversal starts from level 0. The level 1 node is visited.
Then level 2 and so on.


TC : O(V + E)   
void bfs()
{
    vector<int> vis(n + 1 , 0);
    vector<int> level(n + 1 , 0);
    queue<int> q;
    int src = 1; // starting bfs from node 1
    vis[src] = 1; // source node is visited by default;
    level[src] = 0; // level of source node is 0
    q.push(src);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int v : adj[u]){
            //iterating over the list of adjacent nodes
            if(vis[u])
            continue;
            level[u] = level[u] + 1;
            q.push(v);

        }
    }
}
/*
