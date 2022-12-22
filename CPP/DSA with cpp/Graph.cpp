#include <bits/stdc++.h>
using namespace std;
#define vpii vector<pair<int, int>>
#define vi vector<int>

class solution{
    private:
        void dfs(int node,vpii adj[],int vis[],vi &ls){
            vis[node]=1;
            ls.push_back(node);
            for(auto it:adj[node]){
                if(!vis[it.first]){
                    dfs(it.first,adj,vis,ls);
                }
            }
        }
    public:
        vi dfsOfGraph(int v, vpii adj[])
        {
            int vis[v] = { 0 };
            int start = 0;
            vi ls;
            dfs(start, adj, vis,ls);
            return ls;
        }
        vi bfsOfGraph(int v,vpii adj[]){
            int vis[v] = {0};
            queue<int> q;
            q.push(0);
            vis[0]=1;
            vector<int>bfs;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it:adj[node]){
                    if(!vis[it.first]){
                        vis[it.first]=1;
                        q.push(it.first);
                    }
                }
            }
            return bfs;
        }
        vi dijkstra(int v,vpii adj[],int start)
        {
            set<pair<int,int>> set1;
            vi dist(v,1e9);
            set1.insert({0,start});
            dist[start]=0;
            while(!set1.empty()){
                auto it = *(set1.begin());
                int node = it.second;
                int dis = it.first;
                set1.erase(it);
                for(auto it:adj[node]){
                    int adjNode = it.first;
                    int edgW = it.second;
                    if(dis+edgW < dist[adjNode]){
                        if(dist[adjNode]!=1e9)
                            set1.erase({dist[adjNode],adjNode});
                        dist[adjNode] = dis+edgW;
                        set1.insert({dist[adjNode],adjNode});
                    }
                }
            }
            return dist;
        }

};
int main()
{
    int n, m;
    cout << "Enter No.of Nodes and Edges";
    cin >> n >> m;
    vpii adj[n + 1];
    cout << "Enter " << m << " edges with weight";
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    solution obj;
    vi ans = obj.bfsOfGraph(n,adj);
    for(auto i:ans)
        cout<<i<<" ";
    cout<<endl;
    vi shortestPath = obj.dijkstra(n,adj,0);
    for(auto i:shortestPath)
        cout<<i<<" ";
    // vector<int> dfs =
}