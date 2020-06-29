
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int visited[1000001];
int dis[1000001];
int present[1000001];
vector<int> graph[1000001];

void dfs(int i, int d)
{

    visited[i] = 1;
    dis[i] = d;
    for (auto num : graph[i])
    {
        if (visited[num] == 0)
            dfs(num, d + 1);
    }
}

void solve()
{
    int n;
    cin >> n;

    int a, b;
    unordered_set<int> nodes;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        nodes.insert(a);
        nodes.insert(b);
    }

    dfs(a, 0);
    int maxDistance = INT_MIN;
    int answer;
    for (auto i : nodes)
    {

        if (dis[i] > maxDistance)
        {
            maxDistance = dis[i];
            answer = i;
        }
    }
    for (int i = 0; i < 1000001; i++)
    {
        dis[i] = 0;
        visited[i] = 0;
    }
    dfs(answer, 0);
    for (auto i : nodes)
    {

        if (dis[i] > maxDistance)
        {
            maxDistance = dis[i];
        }
    }
    cout<<maxDistance<<endl;
}

int main()
{
    solve();

    return 0;
}