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
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    ll stool=0;
    ll ans=0;
    for (ll i = 1; i <n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            ans+=(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        
        }
    }
    
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