// Graph Representation
int n , m;
cin >> n >> m;
// n - number of nodes
// m - number of edges

vector<int> adj[n + 1];
for(int i = 0 ; i < n ; i++)
{
    int u , v;
    cin >> u >> v;
    //there is an edge between node u and v
    adj[u].push_back(v);
    adj[v].push_back(u);
    
}
