#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{

  ll n;
  cin>>n;
  ll ans=1;
  for (ll i = 1; i <sqrt(n); i++)
  {
      if(n%i==0)
      {
        ll temp=n/i;
        if(__gcd(temp,i)==1)
        ans=i;
        
      }
  }
  cout<<ans<<" "<<n/ans<<endl;
}

int main()
{
    
        solve();
   

    return 0;
}