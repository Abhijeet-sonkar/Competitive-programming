#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    ll a;
    ll b;
    char c;
    ll d;
    cin>>a>>b>>c>>d;
    b*=100;
    b+=d;
    cout<<(a*b)/100<<endl;

}

int main()
{
    init();
    int t=1;
  //  cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}