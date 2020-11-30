#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

int row[2005][2005];
int col[2005][2005];
int diag[2005][2005];
int dp[2005][2005];
int n,m;
void init()
{

}

void solve()
{
    cin>>n>>m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++)
    {
        
            cin>>grid[i];
        
        
    }
    dp[0][0]=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
               if(grid[i][j]=='#')continue;
               if(i>0)row[i][j]+=(row[i-1][j]+dp[i-1][j])%mod;
               if(j>0)col[i][j]+=(col[i][j-1]+dp[i][j-1])%mod;
               if(i>0&&j>0)diag[i][j]+=(diag[i-1][j-1]+dp[i-1][j-1])%mod;

               dp[i][j]+=((long long)row[i][j]+col[i][j]+diag[i][j])%mod;
   
   
    }
        
    }
    cout<<dp[n-1][m-1]<<endl;
    
    
    

}

int main()
{

    int t=1;
   
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}