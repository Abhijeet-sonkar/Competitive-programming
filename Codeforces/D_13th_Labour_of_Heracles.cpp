#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int n;
    cin>>n;

    int weight[n+1]={0};
    ll sum=0;
    for (int i = 0; i <n; i++)
    {
        cin>>weight[i];
        sum+=weight[i];
    }
    
    
    priority_queue<int> mx;
    int a,b;
    bool visited[n];
    memset(visited,false,sizeof(visited));
    for (int i = 1; i <= n-1; i++)
    {
        cin>>a>>b;--a;--b;
        if(visited[a])
        {
            mx.push(weight[a]);
        }
        visited[a]=true;
        if(visited[b])
        {
            mx.push(weight[b]);
        }
        visited[b]=true;
    }

    cout<<sum<<" ";
   
    for (int i = 0; i < n-2; i++)
    {
      int x=mx.top();
      mx.pop();
      sum+=x;
      cout<<sum<<" ";
    }
    cout<<endl;

}

int main()
{
    init();
    int t;
    cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}