#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

int  calDiv(int n)
{
    int count=0;
    for (int i = 1; i <=sqrt(n); i++)
    {
           if(n%i==0)
           {
               if(i==n/i)
               count++;
               else
               {
                   count+=2;
               }
               

           }
    }
    return count;

}

void solve()
{
    int n;
    cin>>n;
     
    ll ans=0;
    for (int i = 1; i <n; i++)
    {
      //  ans+=calDiv(i);
        
    }
    for (int i = 1; i <= n-1; i++)
    {
        ans+=(n-1)/i;
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