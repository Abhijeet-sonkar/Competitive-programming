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
    ll arr[n];
    ll curSum=0;
    ll maxSum=0;
    ll ans=0;
    ll lastSum=0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
       
    }
    for (int i = 0; i < n; i++)
    {
          curSum+=arr[i];
          maxSum=max(maxSum,curSum);
          ans=max(lastSum+maxSum,ans);
          lastSum+=curSum;
    }
    
  
    cout << ans << endl;
}

int main()
{
    init();
    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}