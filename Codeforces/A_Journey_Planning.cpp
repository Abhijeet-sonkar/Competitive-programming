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

    ll arr[n+1]={0};
    map<ll,ll> vis;
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
       vis[arr[i]-i]+=arr[i];
    
    }
    ll ans=0;
    for(auto i:vis)
    {
        ans=max(ans,i.second);
    }
    
    cout<<ans<<endl;
    

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