/*
DFS Traversal
It is a recursive algorithm. 
The basic idea is to start from the root or any arbitrary node
and mark the node as visited and move to the adjacent unmarked node and continue
this loop until there is no unmarked adjacent node. Then backtrack and check for the other 
unmarked nodes and traverse them.

TC : O(V + E)
int vis[maxN];
void dfs(int u)
{
    if(vis[u]) return;
    vis[u] = 1;
    // node u is visited
    for(int v : adj[u])
    {
        dfs(v);
    }
    
}
/*
