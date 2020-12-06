#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
ll fact[10000005];
int n;
void init()
{
    for (int i = 1; i < n+1; i++)
    {
        for (int j = i; j < n+1; j+=i)
        {
            fact[j]++;
        }
        
    }
    

}


void solve()
{
    cin>>n;
    init();


    ll ans=0;
    for (ll i= 1; i <=n; i++)
    {
        ans+=(i*fact[i]);
    }
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