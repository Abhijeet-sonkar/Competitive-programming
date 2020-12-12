#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int n, m;
char grid[505][505];

ll cal(ll x, ll y, ll i)
{

    ll start = y - i + 1;
    ll end = y + i - 1;

    ll curr = x + i - 1;
    if (start < 0 || end > m || curr > n)
        return 0;

    for (int j = start; j <= end; j++)
    {
        if (grid[curr][j] == '.')
            return 0;
    }

    return 1 + cal(x + 1, y, i + 1);
}

void solve()
{

    cin >> n >> m;
    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
           
        }
    }
    ll sum[505] = {0};
  

     vector<vector<int>> dp(n+1,vector<int>(m+1,0));

     for (int i = 0; i <n; i++)
     {
         for (int j = 0; j < m; j++)
         {
             if(grid[i][j]=='*')dp[i][j]=1;
         }
         
     }
     
     for (int i = n-1; i >= 0; i--)
     {
         for (int j = m-2; j >=1; j--)
         {
             if(dp[i][j]==1)
             {
                   dp[i][j]=1+
                   min({dp[i+1][j],dp[i+1][j-1],dp[i+1][j+1]});
             }
          
         }
         
     }
     int ans=0;

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j <m; j++)
         {
             ans+=dp[i][j];
         }
         
     }
     
     

    cout << ans << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}