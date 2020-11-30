#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{

    ll x, k, d;
    cin >> x >> k >> d;

    ll ans = 0;
    ll temp=abs(x) / d;
    if (temp > k)
    {
        ans=abs(x)-k*d;
    }
    else
    {
        ll pos =abs(x)-d*temp;
        k-=temp;
        if(k%2==0)
        {
            ans=pos;

        }
        else
        {
             ans=abs(pos-d);
        }
        
    }
    cout<<ans<<endl;
}

int main()
{
    init();
    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}