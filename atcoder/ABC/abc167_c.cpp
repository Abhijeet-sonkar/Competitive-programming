#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
       int n,m,x;
       cin>>n>>m>>x;
       int cost[n];
       vector<vector<int>> book(n,vector<int>(m,-1));
       for (int i = 0; i <n; i++)
       {
           
               cin>>cost[i];
               for (int  j = 0; j < m; j++)
               {
                   cin>>book[i][j];
               }
               
           
           
       }
       int temp=0;
       int y=0;
       int ans=-1;
       for (int i = 0; i < (1<<n); i++)
       {
           vector<int> a(m,0);
           y=0;
           for (int  j = 0; j<n; j++)
           {

               if(i&(1<<j))
               {
                   y+=cost[j];
                   for (int k = 0; k < m; k++)
                   {
                       a[k]+=book[j][k];
                   }
                   

                      
               }
           }
           
           bool valid=true;
           for (int k = 0; k <m; k++)
           {
             if(a[k]<x)
             {
                 valid=false;
                 break;
             }
           }
           if(valid&&(ans==-1||ans>y))
           {
               ans=y;
           }
           
       }
     cout<<ans<<endl;
       
       
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