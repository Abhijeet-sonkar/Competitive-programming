
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
const int maxNum = 1000001;
int visited[maxNum];
vector<int> graph[maxNum];
int low[maxNum];
int in[maxNum];
int timer;
set<int> ap;
int cut_vertex;
void dfs(int node, int par = -1)
{

    visited[node] = 1;
    low[node] = in[node] = timer++;
    int subTree = 0;
    for (auto child : graph[node])
    {
        if (child == par)
            continue;
        if (visited[child] == 1)
        {
            low[node] = min(low[node], in[child]);
        }
        else
        {
            dfs(child, node);
            if (low[child] >= in[node] && par != -1)
            {
                ap.insert(node);
            }

            low[node] = min(low[child], low[node]);
            subTree++;
        }
    }
    if (par == -1 && subTree > 1)
        {
            ap.insert(node);
        }
}

void solve(int n, int e)
{

    int a, b;

    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    timer = 0;
    cut_vertex = 0;

    dfs(a);
    cout << ap.size() << endl;
}

int main()
{
    int n, e;
    while (1)
    {
        cin >> n >> e;

        if (n == 0 && e == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < maxNum; i++)
            {
                visited[i] = 0;
                in[i] = -1;
                low[i] = -1;
                graph[i].clear();
                ap.clear();
            }

            solve(n, e);
        }
    }

    return 0;
}