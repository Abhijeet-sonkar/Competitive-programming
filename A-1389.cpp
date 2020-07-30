#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a*2<=b)
    cout<<a<<" "<<a*2<<endl;
    else
    {
        cout<<"-1 -1 "<<endl;
    }
    
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