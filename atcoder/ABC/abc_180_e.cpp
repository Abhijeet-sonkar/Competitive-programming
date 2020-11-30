#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
ll city[100][3];
int n;
ll dp[20][1<<20];
ll minCost(int i,int mask)
{
      if(mask==0)
      {

          return abs(city[i][0]-city[0][0])
          +abs(city[i][1]-city[0][1])+max(0ll,city[0][2]-city[i][2]);

      } 
      if(dp[i][mask]!=-1) return dp[i][mask];

      ll ans =1e18;
      for (int j = 0; j < n; j++)
      {
          if(mask&(1<<j))
          ans=min(ans, abs(city[i][0]-city[j][0])
          +abs(city[i][1]-city[j][1])
          +max(0ll,city[j][2]-city[i][2])
          +minCost(j,mask^(1<<j)));
      }
      
    return  dp[i][mask]=ans;

}

void solve()
{
 
    cin>>n;
   
    for (int i = 0; i < n; i++)
    {
        cin>>city[i][0]>>city[i][1]>>city[i][2];
    }
    
    memset(dp,-1,sizeof(dp));

    cout<<minCost(0,(1<<n)-2)<<endl;

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