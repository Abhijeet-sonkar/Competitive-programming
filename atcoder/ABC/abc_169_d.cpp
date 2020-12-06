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
    cin >> n;

    unordered_map<ll, ll> fact;
    while (n % 2 == 0)
    {
        fact[2]++;
        n /= 2;
    }
    for (ll i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            fact[i]++;
            n /= i;
        }
    }
    if (n > 2)
        fact[n]++;
    
    ll ans=0;
    for (auto i : fact)
    {
        ll count = 0;
        ll t = 1;
        while ((t * (t + 1) / 2) <= i.second)
           { count++;
             t++;
           }
           ans+=count;
    }
    cout<<ans<<endl;
}

int main()
{
    init();
    int t=1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}