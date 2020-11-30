#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    ll a[n+1]={0};
    ll b[m+1]={0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i]+=a[i-1];
    }
    for (int i = 1; i <=m; i++)
    {
        cin >> b[i];
        b[i]+=b[i-1];
    }
    int ans=0;
    
   for (int i = 0; i < n&&k>=a[i]; i++)
   {
       
           int pos=upper_bound(b,b+m+1,k-a[i])-b-1;

           ans=max(ans,i+pos);
           
   }
   cout<<ans<<endl;
    

 
}

int main()
{
    init();
    int t=1;
   
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}