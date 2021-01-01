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

    int arr[n];
    bool vis[1000];
    memset(vis,false,sizeof(vis));
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            vis[arr[j]-arr[i]]=true;
        }
        
    }
    int ans=0;

    for (int i = 0; i < 1000; i++)
    {
        if(vis[i])ans++;
    }
    
    
    cout<<ans<<endl;
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