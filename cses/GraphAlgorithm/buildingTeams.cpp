#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


vector<vector<int>> team(100005);
int n,m;

bool possible;
bool color[100005];
bool visited[100005];
void dfs(int v,int flag)
{
    visited[v]=true;

    color[v]=flag;

    for (auto child:team[v])
    {

        if(!visited[child])
        {
            dfs(child,!flag);
        }
        else 
        {
            if(color[child]==color[v])
            {
                possible=false;
            }
        }
        /* code */
    }
    

}
void solve()
{
    cin>>n>>m;
    
    int a,b;
    memset(visited,false,sizeof(visited));

    memset(color,false,sizeof(color));
    for (int i = 0; i < m; i++)
    {
        cin>>a>>b;

        team[a].push_back(b);
        team[b].push_back(a);
    }
    int count =0;

    
    possible=true;
    for (int i = 1; i <= n; i++)
    {
        if(!visited[i])
        {
           dfs(i,true);
        }
    }
    if(!possible)
    {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if(color[i])cout<<"1 ";
        else cout<<"2 ";        /* code */
    }
    cout<<endl;



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