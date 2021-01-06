#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int n,x;
    cin>>n>>x;

    int arr[n];
    ll mn=0;
    ll mx=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mn+=arr[i];
        mx+=(arr[i]+x-1)/x;
    }
    mn=(mn+x-1)/x;
    cout<<mn<<" "<<mx<<endl;


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