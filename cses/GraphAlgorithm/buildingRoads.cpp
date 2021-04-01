#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


vector<vector<int>> road(100005);
int n,m;

bool visited[100005];
void dfs(int v)
{
    visited[v]=true;

    for (auto child:road[v])
    {
        if(!visited[child])
        {
            dfs(child);
        }
        /* code */
    }
    

}
void solve()
{
    cin>>n>>m;
    
    int a,b;
    memset(visited,false,sizeof(visited));

    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;

        road[a].push_back(b);
        road[b].push_back(a);
    }
    int count =0;

    vector<int> cons;

    for (int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
           dfs(i);
           count++;
           cons.push_back(i);
        }
    }
    vector<pair<int,int>> ans;

    for(int i=0;i<(int)cons.size()-1;i++)
    {
        ans.push_back({cons[i],cons[i+1]});


    }
    if(count==1)
    {
        cout<<"0"<<endl;
        return;
    }
    cout<<ans.size()<<endl;
    for(auto i:ans)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

}

int main()
{
    
    int t=1;
   // cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}