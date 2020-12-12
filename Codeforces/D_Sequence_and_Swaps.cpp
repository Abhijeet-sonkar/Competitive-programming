#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}
bool not_sorted(vector<int> a)
{
    int n=a.size();
    for (int i = 1; i < n; i++)
    {
        if(a[i]<a[i-1])return 1;
    }
    
    return 0;

}

void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int ans=0;
    while (not_sorted(a))
    {
         ans++;
         int i=0;
         while(i<n&&a[i]<=x)i++;

         if(i==n) 
         {
             cout<<"-1"<<endl;
             return;
         }
         else
         {
             swap(a[i],x);
         }
         
    }
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