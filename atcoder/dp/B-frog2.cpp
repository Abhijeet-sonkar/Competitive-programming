#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n,k;
    cin>>n>>k;
    int height[n]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>height[i];
    }
    ll jump[n];
    for (int i = 1; i < n; i++)
    {
        jump[i]=mod;
    }
    
    jump[0]=0;
    
  
    for (int i = 1; i < n; i++)
    {

        for (int j = 1; j <=k; j++)
        {
            if(i-j>=0)
            jump[i]=min(abs(height[i]-height[i-j])+jump[i-j],jump[i]);
        }
        
      
    }
    cout<<jump[n-1]<<endl;
    
}

int main()
{
  
        solve();
     

    return 0;
}