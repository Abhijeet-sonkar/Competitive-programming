//to check whether graph is bipartite or not
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int p;

bool dfs(int i,int c,int visited[],int color[],vector<int> graph[])
{

    visited[i] = 1;
    color[i]=c;
    for (auto num : graph[i])
    {
        if (visited[num] == 0)
        {
            if(dfs(num,c^1,visited,color,graph)==false)
            return false;

        }
        else
        {
           if(color[num]==color[i])
           return false;
        }
        
    }
    return true;
}

void solve(int t)
{
    int n, e;
    int visited[2001]={0};
    int color[2001]={0};
    vector<int> graph[20001];
    cin >> n >> e;

    int a, b;
    unordered_set<int> bugs;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b;
        bugs.insert(a);
        bugs.insert(b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int flag=1;
    for (auto bug:bugs)
    {
        if(visited[bug]==0)
        {
            if(dfs(bug,0,visited,color,graph)==false)
            {
                flag=-1;
                break;


            }
        }
    }
    cout<<"Scenario #"<<p<<':'<<endl;
    if(flag==-1)
    {
        
        cout<<"Suspicious bugs found!"<<endl;
    }
    else
    {
        cout<<"No suspicious bugs found!"<<endl;
    }
    
    
    p++;
}

int main()
{
    int t;
    p=1;
    cin >> t;
    while (t)
    {
        solve(t);
        --t;
    }

    return 0;
}