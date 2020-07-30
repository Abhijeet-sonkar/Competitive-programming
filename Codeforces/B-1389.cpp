#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int n, k, z;
    cin >> n >> k >> z;
    int arr[n];
    int preSum[n + 1]={0};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        preSum[i] = preSum[i - 1] + arr[i];
    }
    int ans=preSum[++k];
    for (int i = 1; i <k ;i++)
    {
        for (int j = 1; j <=z; j++)
        {
            int r=k-2*j;
            if(r<i)
            continue;
            ans=max(ans,preSum[r]+j*(arr[i]+arr[i+1]));
        }
        
    }
    cout<<ans<<endl;
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}