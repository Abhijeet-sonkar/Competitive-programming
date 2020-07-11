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
     int dp[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        dp[i]=1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i*2; j <= n; j+=i)
        {
            if(arr[j]>arr[i])
            dp[j]=max(dp[j],dp[i]+1);

        }
        
    }
    int beauty=0;
    for (int i = 1; i <=n; i++)
    {
        beauty=max(beauty,dp[i]);
        
    }
    cout<<beauty<<endl;
    
    
    
     
     
          
    
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