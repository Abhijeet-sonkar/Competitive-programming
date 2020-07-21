#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n;
    cin>>n;
    int height[n]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>height[i];
    }
    int jump[n];
    jump[0]=0;
    jump[1]=abs(height[1]-height[0]);
  
    for (int i = 2; i < n; i++)
    {
        jump[i]=min(abs(height[i]-height[i-2])+jump[i-2],abs(height[i]-height[i-1])+jump[i-1]);
        
    }
    cout<<jump[n-1]<<endl;
    
}

int main()
{
  
        solve();
     

    return 0;
}