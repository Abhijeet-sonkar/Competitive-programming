#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

int kadane(int a[],int n)
{
    int mx=a[0];
    int curr=a[0];
    for (int i = 1; i < n; i++)
    {
        curr=max(a[i],curr+a[i]);
        mx=max(mx,curr);
    }
    
    return mx;
}
void solve()
{
    int n,m;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
     cin>>a[i];
    }
    cin>>m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int rem1=0;
    int asum=0;
    for (int i = 0; i < n; i++)
    {
             asum+=a[i];
             rem1=max(rem1,asum);   
    }
    
     int rem2=0;
    int bsum=0;
    for (int i = 0; i < m; i++)
    {
             bsum+=b[i];
             rem2=max(rem2,bsum);   
    }
    
    int ans=0;
    int sum1=kadane(a,n);
    int sum2=kadane(b,m);
   // cout<<sum1<<" "<<sum2<<endl;
    ans=max({ans,rem1+rem2});
    
    cout<<ans<<endl;
    

}

int main()
{
    init();
    int t;
    cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}