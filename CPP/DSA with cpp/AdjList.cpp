#include <bits/stdc++.h>
using namespace std;
#define pairs pair<int, int>
#define vpii vector<pairs>
#define Graph vector<vpii>
#define vi vector<int>
int main()
{
    int n, m;
    cout << "Enter No.of Nodes and Edges\n";
    cin >> n >> m;
    Graph adj(n+1);
    cout << "Enter " << m << " edges with weight\n";
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    return 0;
}