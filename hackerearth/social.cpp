//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/social-networking-graph/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int visited[1000001];
vector<int> graph[1000001];
int dis[1000001];
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
  
    int n, e;
    cin >> n >> e;

    int a, b;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        for (int i = 0; i < 1000001; i++)
        {
            visited[i]=0;
            dis[i]=0;
        }
        bfs(a);
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(dis[i]==b)
            count++;

        }
        cout<<count<<endl;
        
        
    }
}

int main()
{
    
        solve();
  
    return 0;
}
