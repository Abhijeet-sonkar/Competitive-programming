#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    map<ll, ll> rem;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
       
        rem[arr[i] % k]++;
    }

    ll moves = 0;

    for (auto it:rem)
    {
       ll a=it.first;
       ll b = it.second;
       if(a!=0)
       moves=max(moves,k*b-a);
    }

    if(moves)
    moves++;

    cout << moves << endl;
}

int main()
{
    init();
    ll t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}