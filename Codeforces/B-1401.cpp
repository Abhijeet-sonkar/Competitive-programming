#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int a0, a1, a2;
    cin >> a0 >> a1 >> a2;
    int b0, b1, b2;
    cin >> b0 >> b1 >> b2;
    int ans=0;
    if (a2 >= b1)
    {
        ans+=b1*2;
        a2-=b1;
        if(a2<b2)
        {
          b2-=a2;
          if(a0<b2)
          {
              b2-=a0;
              ans-=2*b2;
          }
        }

    }
    else
    {
        ans+=2*a2;
        b1-=a2;
        if(a1>b1)
        {
            a1-=b1;
            if(a1>b0)
            {
                a1-=b0;
                ans-=2*a1;
            }
        }
    }
    cout<<ans<<endl;
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