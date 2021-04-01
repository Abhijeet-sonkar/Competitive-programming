#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}
int n;
int m;
bool visited[100005];
vector<vector<int>> edge(100005);
void solve()
{
    cin>>n>>m;

    int a,b;
    
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
        /* code */
    }
    
    queue<int> q;
    q.push(1);
    memset(visited,false,sizeof(visited));

    visited[1]= true;

    int path[100005];
    memset(path,-1,sizeof(path));

    ll dis[100005]={0};
    while(!q.empty())
    {
        int v =q.front();
        q.pop();

        for(auto i:edge[v])
        {
            if(!visited[i])
            {
                visited[i]=true;
                q.push(i);
                dis[i]=dis[v]+1;
                path[i]=v;
            }
        }

    }
    if(path[n]==-1)
    {
            cout<<"IMPOSSIBLE"<<endl;
            return;
    }

   // cout<<dis[n]<<endl;
    int x=n;
    vector<int> ans;
    ans.push_back(n);
    while(path[x]!=-1)
    {
        ans.push_back(path[x]);
        x=path[x];
    }
    reverse(ans.begin(),ans.end());
    
    cout<<ans.size()<<endl;
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    
}

int main()
{
    init();
    int t=1;

    while(t)
    {
        solve();
        --t;
    }

    return 0;
}