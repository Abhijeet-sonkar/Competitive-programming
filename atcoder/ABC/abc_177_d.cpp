#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
void init()
{
}
int vis[200010];
vector<int> graph[200010];

int dfs(int par)
{
    int ans = 0;
    if (!vis[par])
    {
        vis[par]=true;
        ans++;
        for (auto i : graph[par])
            ans += dfs(i);
    }
   return ans;
}
void solve()
{
    int n, q;
    cin >> n >> q;
    memset(vis, sizeof(vis), false);
    while (q)
    {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        graph[a].push_back(b);
        graph[b].push_back(a);

        --q;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
       if(!vis[i])
        ans=max(ans,dfs(i));
    }
    cout<<ans<<endl;
}

int main()
{
    init();
    int t=1;
    
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}