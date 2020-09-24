#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

ll ceil_div(ll a,ll b)
{

    return (a+b-1)/b;

}

void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;
    ll count_1=ceil_div(y*k+k-1,x-1);
   cout<<count_1+k<<endl;
}

int main()
{
    
    int t;
    cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}