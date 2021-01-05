#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

ll cal(ll a)
{
    ll res=1;
    while(a%2==0)res*=2,a/=2;

    return res;
}

void solve()
{
    ll h,w,n;
    cin>>h>>w>>n;
 
    ll ans=cal(h)*cal(w);
    if(ans>=n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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