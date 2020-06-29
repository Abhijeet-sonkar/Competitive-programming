//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int visited[1000001];
int dis[1000001];
int present[1000001];
vector<int> graph[1000001];

void dfs(int i,int d)
{
 
  visited[i]=1;
  dis[i]=d;
  for (auto num:graph[i])
  {
      if(visited[num]==0)
      dfs(num,d+1);
  }
  


}

void solve()
{
    int n;
    cin>>n;
   
    int a,b;
    for (int i = 0; i < n-1; i++)
    {
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int p;
    cin>>p;
    int x;
    for (int i = 0; i < p; i++)
    {
        cin>>x;
        present[x]=1;
        
    }
    
    dfs(1,0);
    int minDistance=INT_MAX;
    int answer;
    for (int i = 2; i <=n ; i++)
    {
        if(present[i]==1)
        {
            if(dis[i]<minDistance)
             {
                minDistance=dis[i];
                answer=i;
             }
        }
    }
    
    cout<<answer;

}

int main()
{
    solve();
   
    return 0;
}