//https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int visited[1000001];
 vector<int> graph[1000001];
void dfs(int i)
{
 
  visited[i]=1;
  for (auto num:graph[i])
  {
      if(visited[num]==0)
      dfs(num);
  }
  


}

void solve()
{
    int n,e;
    cin>>n>>e;
   
    int a,b;
    for (int i = 0; i < e; i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int count=0;
    for (int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            dfs(i);
            count++;
        }
    }
    
    cout<<count<<endl;

}

int main()
{
    solve();
   
    return 0;
}