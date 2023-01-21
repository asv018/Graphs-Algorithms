/*
Connected Components
Is a subgraph in which each pairs of nodes is connected 
with each other via a path.
Cycle in Graph
In graph theory, a path that starts from a given vertec and ends the same vertex
is called a cycle.


Bipartite Matching
Consider a graph G(V,E).The graph is a bipartite graph if:
The vertex set V of G can be partitioned into two disjoint and independent sets V1 and V2.
All the edges from the edge set E have one endpoint vertex from the set V1 and another endpoint vertex from the set V2.


// Bipartite Matching
int vis[maxN];
int col[maxN];
bool dfs(int u , int c)
{
    vis[u] = 1;
    col[u] = c;

    for(auto x : adj[u])
    {
        if(vis[x] == 0)
        {
            if(dfs(x , c ^ 1) == false)
            return false;

        }
        else if(col[u] == col[x])
        return false;
    }
    return true;
}

/*
