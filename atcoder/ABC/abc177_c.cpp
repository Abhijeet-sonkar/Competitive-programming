#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];

    }
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        sum=(sum-arr[i])%mod;
        ll temp=(sum+mod)%mod;
        temp=(temp*arr[i])%mod;

        ans=(ans+temp)%mod;
    }
    ans=ans%mod;
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