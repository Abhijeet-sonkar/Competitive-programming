#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    ll l, r, m;
    cin >> l >> r >> m;
    ll a=0;
    ll b=0;
    ll c=0;
    for (ll i = l; i <= r; i++)
    {
        if (i <= m)
        {
            if (m % i == 0)
            {
                a = i;
                b = i;
                c = i;
                break;
            }
            else
            {
               if(m%i<=(r-l))
               {
                   a=i;
                   b=r;
                   c=r-m%i;
                   break;
               }
               else if((i-m%i)<=(r-l))
               {
                   a=i;
                   b=l;
                   c=l+i-m%i;
                   break;
               }
               
            }
            
        }
        else
        {
            if(i-m<=(r-l))
            {
                a=i;
                b=l;
                c=l+(i-m);
            }
        }
        
    }
    cout<<a<<" "<<b<<" "<<c<<endl;

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