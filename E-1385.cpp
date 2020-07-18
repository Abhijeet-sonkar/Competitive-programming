#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

vector<vector<int>> graph;
vector<int> visited;
vector<int> order;
void dfs(int node)
{
    visited[node] = 1;
    for (auto child : graph[node])
    {
        if (visited[child] == 0)
            dfs(child);
    }
    order.push_back(node);
}
void solve()
{
    int n, m;
    cin >> n >> m;
    visited = vector<int>(n);
    graph = vector<vector<int>>(n);
    for (int i = 0; i < n; i++)
    {
        graph[i].clear();
        visited[i]=0;
    }
    
    vector<pair<int, int>> edge;
    int t, x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> t >> x >> y;
        --x;
        --y;
        if (t == 1)
        {
            graph[x].push_back(y);
        }
        edge.push_back({x, y});
    }
    order.clear();

    for (int i = 0; i < n; i++)
    {
        if (visited[i]==0 )
            dfs(i);
    }
    reverse(order.begin(), order.end());
    vector<int> pos(n);
    for (int i = 0; i < n; i++)
    {
        pos[order[i]] = i;
    }
    bool cycle=false;
    for (int i = 0; i < n; i++)
    {
        for (auto child : graph[i])
        {
            if (pos[i] > pos[child])
                cycle = true;
        }
    }
    if (cycle == true)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (auto it : edge)
        {
            if (pos[it.first] > pos[it.second])
                cout << it.second + 1 << " " << it.first + 1 << endl;
            else
            {
                cout << it.first + 1 << " " << it.second +1 << endl;
            }
        }
    }
}

int main()
{

    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}
