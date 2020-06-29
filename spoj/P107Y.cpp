//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int visited[1000001];
vector<int> graph[1000001];
void dfs(int i)
{

    visited[i] = 1;
    for (auto num : graph[i])
    {
        if (visited[num] == 0)
            dfs(num);
    }
}

void solve()
{
    int n, e;
    cin >> n >> e;

    int a, b;
    int start;
    unordered_set<int> nodes;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        nodes.insert(a);
        nodes.insert(b);
    }
    int count = 0;
    for (auto it : nodes)
    {
        if (visited[it] == 0)
        {
            dfs(it);
            count++;
        }
    }
    if (count == 1 && e == n - 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


}

int main()
{
    solve();

    return 0;
}