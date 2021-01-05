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

     ll arr[n+1];
     for (int i = 1; i <= n; i++)
     {
         cin>>arr[i];
     }

     ll scores[n+1]={0};

     for (int i = 1; i <= n; i++)
     {
        scores[i]+=arr[i];
        if(arr[i]+1>n)continue;

        scores[i+arr[i]]=max(scores[i+arr[i]],scores[i]);
     }
     ll ans=0;
     for (int i = 1; i <=n; i++)
     {
        ans=max(ans,scores[i]);
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