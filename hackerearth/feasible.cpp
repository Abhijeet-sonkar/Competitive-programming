//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/feasible-relations/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int visited[1000001];
vector<int> graph[1000001];
int curr;
int connected[1000001];
void dfs(int i)
{

    visited[i] = 1;
    connected[i]=curr;

    for (auto num : graph[i])
    {
        if (visited[num] == 0)
            dfs(num);
    }
}

void solve()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < 1000001; i++)
    {
        visited[i]=0;
        graph[i].clear();
    }
    

    int a, b;
    string op;
    vector<pair<int,int>> edgeList;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> op >> b;
        if (op == "=")
        {
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        else
        {
            edgeList.push_back({a,b});
            
        }
        
    }
     curr = 0;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i);
            curr++;
        }
    }
    int flag=1;
    for (int i = 0; i < edgeList.size(); i++)
    {
        a=edgeList[i].first;
        b=edgeList[i].second;
        if(connected[a]==connected[b])
        {
            flag=-1;
            break;

        }
    }

    if(flag==-1)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
    }
    
    

    
}

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}