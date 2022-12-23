#include <bits/stdc++.h>
using namespace std;
#define pairs pair<int, int>
#define vpii vector<pairs>
#define Graph vector<vpii>
#define vi vector<int>
class solution
{
private:
    void dfs(int node, Graph adj, int vis[], vi &ls)
    {
        vis[node] = 1;
        ls.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it.first])
            {
                dfs(it.first, adj, vis, ls);
            }
        }
    }
    void findDisjointPaths(Graph adj, int src, int dest, vector<vi> &paths, int vis[])
    {
        if (src == dest)
        {
            paths.push_back({src});
            return;
        }
        vis[src] = 1;
        for (auto neighbour : adj[src])
        {
            if (!vis[neighbour.first])
            {
                vector<vi> subPaths;
                findDisjointPaths(adj, neighbour.first, dest, subPaths, vis);
                for (auto &subPath : subPaths)
                    subPath.insert(subPath.begin(), src);
                paths.insert(paths.end(), subPaths.begin(), subPaths.end());
            }
        }
        vis[src] = 0;
    }

public:
    vi dfsOfGraph(int v, Graph adj)
    {
        int vis[v] = {0};
        int start = 0;
        vi ls;
        dfs(start, adj, vis, ls);
        return ls;
    }
    vi bfsOfGraph(int v, Graph adj)
    {
        int vis[v] = {0};
        queue<int> q;
        q.push(0);
        vis[0] = 1;
        vector<int> bfs;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            for (auto it : adj[node])
            {
                if (!vis[it.first])
                {
                    vis[it.first] = 1;
                    q.push(it.first);
                }
            }
        }
        return bfs;
    }
    vi dijkstra(int v, Graph adj, int start)
    {
        set<pairs> set1;
        vi dist(v, 1e9);
        set1.insert({0, start});
        dist[start] = 0;
        while (!set1.empty())
        {
            auto it = *(set1.begin());
            int node = it.second;
            int dis = it.first;
            set1.erase(it);
            for (auto it : adj[node])
            {
                int adjNode = it.first;
                int edgW = it.second;
                if (dis + edgW < dist[adjNode])
                {
                    if (dist[adjNode] != 1e9)
                        set1.erase({dist[adjNode], adjNode});
                    dist[adjNode] = dis + edgW;
                    set1.insert({dist[adjNode], adjNode});
                }
            }
        }
        return dist;
    }
    vi shortestPath(int v, Graph adj, int dest,int src=0)
    {
        vi dist(v, 1e9), parent(v);
        for (int i = 0; i < v; i++)
            parent[i] = i;
        set<pairs> set1;
        set1.insert({0, src});
        dist[src] = 0;
        while (!set1.empty())
        {
            auto it = *(set1.begin());
            int node = it.second;
            int dis = it.first;
            set1.erase(it);
            for (auto it : adj[node])
            {
                int adjNode = it.first;
                int edgW = it.second;
                if (dis + edgW < dist[adjNode])
                {
                    if (dist[adjNode] != 1e9)
                        set1.erase({dist[adjNode], adjNode});
                    dist[adjNode] = dis + edgW;
                    set1.insert({dist[adjNode], adjNode});
                    parent[adjNode] = node;
                }
            }
        }
        if (dist[dest] == 1e9)
            return {-1};
        vi path;
        int node = dest;
        while (parent[node] != node)
        {
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(0);
        reverse(path.begin(), path.end());
        return path;
    }
    vector<vi> allPaths(int v, Graph adj, int src, int dest)
    {
        int vis[v] = {0};
        vector<vi> disjointPaths;
        findDisjointPaths(adj, src, dest, disjointPaths, vis);
        return disjointPaths;
    }
    vector<vi> allDisjointPaths(int v, Graph adj, int src, int dest)
    {
        vector<vi>paths;
        vi pathToDest=shortestPath(v,adj,dest,src);
        while(pathToDest[0]!=-1){
            paths.push_back(pathToDest);
            for(int i=0;i<pathToDest.size()-1;i++)
            {
                int edgePoint1 = pathToDest[i];
                int edgePoint2 = pathToDest[i+1];
                for(int j=0;j<adj[edgePoint1].size();j++)
                {
                    if(adj[edgePoint1][j].first==edgePoint2)
                    {
                        adj[edgePoint1].erase(adj[edgePoint1].begin()+i);
                        break;
                    }
                }
                for(int j=0;j<adj[edgePoint2].size();j++)
                {
                    if(adj[edgePoint2][j].first==edgePoint1)
                    {
                        adj[edgePoint2].erase(adj[edgePoint2].begin()+i);
                        break;
                    }
                }
            }
            pathToDest=shortestPath(v,adj,dest,src);
        }
        return paths;
    }
};
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
    solution obj;
    vi ans = obj.bfsOfGraph(n, adj);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    vi shortestPath = obj.dijkstra(n, adj, 0);
    for (auto i : shortestPath)
        cout << i << " ";
    int src, dest;
    cout << "\nEnter Destination";
    cin >> dest;
    vi path = obj.shortestPath(m, adj, dest);
    for (auto i : path)
        cout << i << " ";
    cout << "\nEnter source and paths for all disjoint Paths";
    cin >> src >> dest;
    vector<vi> disJointPaths = obj.allDisjointPaths(n, adj, src, dest);
    for (auto path : disJointPaths)
    {
        for (auto vertex : path)
            cout << vertex << " ";
        cout << endl;
    }
}