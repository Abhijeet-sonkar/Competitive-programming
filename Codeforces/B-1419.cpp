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
    ll count=0;
    ll two=1;
    ll fair=1;
    while(n>=0)
    {
       count++;
       n-=fair*(fair+1ll)/2;
       fair+=2*two*1ll;
       two=two*2ll;
      

    }
    cout<<count-1<<endl;


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