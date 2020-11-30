#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

ll powmod(ll a,ll b)
{
   ll res=1;
   for (int i = 0; i <b; i++)
   {
       res=(res*a)%mod;
       /* code */
   }
   return res;
   
}

void solve()
{
    ll n;
    cin>>n;
 
    ll ans=(powmod(10,n)-powmod(9,n)+mod)%mod;
    ans=(ans-powmod(9,n)+mod)%mod;
    ans=(ans+powmod(8,n))%mod;

    
   cout<<ans<<endl;

}

int main()
{
    
    int t=1;
    
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}