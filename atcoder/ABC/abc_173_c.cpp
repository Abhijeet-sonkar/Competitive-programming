#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int h,w,k;
    cin>>h>>w>>k;

    char grid[h][w];
    for (int i = 0; i < h; i++)
    {
        for (int  j = 0; j < w; j++)
        {
            cin>>grid[i][j];
        }
        
        
    }

    int ans=0;
    for (int maskR = 0; maskR < (1<<h)-1; maskR++)
    {
     for (int maskC = 0; maskC < (1<<w)-1; maskC++)
     {
           int black=0;
            for (int i = 0; i < h; i++)
            {
                for (int j = 0; j < w; j++)
                {
                   if((((1<<i)&maskR)==0)&&(((1<<j)&maskC)==0)&&(grid[i][j]=='#'))
                   {
                             black+=1;
                   }
                }
                
            }
            if(black==k)ans++;
            
     }
     
    }
    
    
      cout<<ans<<endl;

}

int main()
{
    init();
    int t=1;
    
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}