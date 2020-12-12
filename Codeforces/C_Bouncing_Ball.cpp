#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    ll n,p,k;
    cin>>n>>p>>k;
    string s;
    cin>>s;
    p--;
    ll x,y;
    cin>>x>>y;

     ll arr[n+1]={0};
     for (int i = 0; i < n; i++)
     {
         if(s[i]=='0')arr[i]++;
     }
     for (int i = n-k-1; i >= 0; i--)
     {
         arr[i]+=arr[i+k];

     }
     ll ans=1e9;
     for (int i = p; i <n; i++)
     {
        ans=min(ans,((i-p)*y)+(arr[i]*x));
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