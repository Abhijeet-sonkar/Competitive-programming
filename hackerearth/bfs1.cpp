//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int visited[10001];
vector<int> graph[10001];
int dis[10001];
void bfs(int i)
{
    queue<int> nodes;
    nodes.push(i);

    visited[i] = 1;
    dis[i] = 0;


    while (!nodes.empty())
    {
        int cur = nodes.front();
        nodes.pop();

        for (auto child : graph[cur])
        {
            if (visited[child] == 0)
            {
                nodes.push(child);
                dis[child] = dis[cur] + 1;
                visited[child] = 1;
            }
        }
    }
}

void solve()
{
    for (int i = 0; i < 10001; i++)
    {
        graph[i].clear();
        visited[i] = 0;
    }

    int n, e;
    cin >> n >> e;

    int a, b;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    bfs(1);
    cout << dis[n] << endl;
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