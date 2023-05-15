#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
#define vi vector<int>
class Solution
{
public:
    int countCompleteComponents(int n, vector<vector<int>> &edges)
    {
        vector<int> adj[n];
        for (int i = 0; i < edges.size(); i++)
        {
            int u = edges[i][0], v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int vis[n] = {0};
        int sol = 0;
        for (int i = 0; i < n; i++)
        {
            int size = 1;
            if (vis[i] == 0)
            {
                bool flag = false;
                queue<int> queue;
                queue.push(i);
                int c = 1;
                while (!queue.empty())
                {
                    int j = queue.front();
                    queue.pop();
                    for (int &node : adj[j])
                        if (vis[node] == 0)
                        {
                            if (c > 1) flag = true;
                            size++;
                            vis[node] = 1;
                            queue.push(node);
                        }
                    c++;
                }
                bool notpos = false;
                for (int node : adj[i])
                    if (adj[node].size() != size)
                    {
                        notpos = true;
                        break;
                    }
                if (!notpos && !flag)
                    sol++;
            }
        }
        return sol;
    }
};
int main()
{
    Solution obj;
    vector<int> arr = {1, 0};
    cout << obj.maxMoves(arr);
    return 0;
}