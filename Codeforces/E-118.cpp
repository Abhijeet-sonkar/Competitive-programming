#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int visited[1000001];
vector<int> graph[1000001];
int low[1000001];
int in[1000001];
map<pair<int,int>,int> visited_pair;
int timer;
int flag;
void dfs_bridge(int node, int par)
{

    visited[node] = 1;
    in[node] = low[node] = timer;
    timer++;
    for (auto child : graph[node])
    {
        if (child == par)
            continue;

        if (visited[child] == 1)
            low[node] = min(low[node], in[child]);
        else
        {
            dfs_bridge(child, node);
            if (low[child] > in[node])
                flag = 1;

            low[node] = min(low[child], low[node]);
        }
    }
}
void dfs_route(int node, int par)
{

    visited[node] = 1;

    for (auto child : graph[node])
    {
        if (visited[child] == 0)
        {
            cout << node << " " << child << endl;
           
            
            dfs_route(child, node);
        }
        else if (visited[child] == 1)
        {
            
            if ((child != par)&&visited_pair[{child,node}]==0&&visited_pair[{node,child}]==0)
                cout << node << " " << child << endl;

             visited_pair[{child,node}]++;    
             visited_pair[{node,child}]++;
        }
    }
}

void solve()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < 1000001; i++)
    {
        visited[i] = 0;
        graph[i].clear();
        in[i] = 0;
        low[i] = 0;
    }

    int a, b;

    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    timer = 0;
    flag = 0;
    dfs_bridge(a, -1);

    if (flag == 1)
        cout << "0" << endl;
    else
    {
     
        for (int i = 0; i < 1000001; i++)
        {
            visited[i] = 0;
            in[i]=0;
        }
        dfs_route(1, -1);
    }
}

int main()
{
    solve();

    return 0;
}