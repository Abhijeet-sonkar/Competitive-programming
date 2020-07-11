#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1] = {0};
    int dp[n + 1];
    map<ll,ll> paths;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
       
        paths[i-arr[i]]+=arr[i];
    }
    ll  maxPaths=0;
    for (auto it:paths)
    {
       maxPaths=max(it.second,maxPaths);
    }
    cout<<maxPaths<<endl;
    
}

int main()
{

    solve();

    return 0;
}