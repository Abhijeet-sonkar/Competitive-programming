#include <bits/stdc++.h>
using namespace std;
bool prime[10001];
vector<int> graph[10001];
int visited[10001];
int dis[10001];
vector<int> primeList;

void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
bool isValid(int a,int b)
{
    int count=0;
    while (a>0)
    {
        if(a%10==b%10)
        count++;
        a/=10;b/=10;
    }
    
    if(count==3)
    return true;

    return false;
}
void makeGraph()
{
    for (int i = 1000; i <=9999; i++)
    {
        if(prime[i]==1)
        primeList.push_back(i);
    }
    int a,b;
    
    for (int i = 0; i < primeList.size(); i++)
    {
        for (int j = i+1; j < primeList.size(); j++)
        {
            a=primeList[i];
            b=primeList[j];
            if(isValid(a,b))
            {
              graph[a].push_back(b);
              graph[b].push_back(a);
            }
        }
        
    }
    

}
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
    for (int i = 0; i < 10001; i++)
    {
        dis[i]=-1;
        visited[i]=0;
    }
    
    int a, b;
    cin >> a>> b;

    bfs(a);
    if(dis[b]==-1)
    cout<<"IMPOSSIBLE"<<endl;
    else
    {
        cout<<dis[b]<<endl;
    }
    
    


}

int main()
{

    SieveOfEratosthenes(10001);
   makeGraph();
    int t;
    cin>>t;
    while (t)
    {
        solve();
        --t;
    }
    return 0;
}
