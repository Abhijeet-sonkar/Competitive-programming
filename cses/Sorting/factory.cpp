#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
ll h;
ll n;
ll k;
ll arr[1000000];
int possible(ll a)
{
   ll count=0;
   for (int i = 0; i < n; i++)
   {
       count=count+a/arr[i];
             
   }
   if(count>=k)
   return 1;
   else
   return -1;

}

void solve()
{
    cin>>n>>k;
    
    ll small=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        small=min(small,arr[i]);
    }
     h=k*small;
     ll temp=-1;
  
    for (ll b = h; b>=1; b/=2)
    {
      
       while(possible(b+temp)==-1)
       {
           temp=temp+b;}
    }
    temp=temp+1;
    cout<<temp<<endl;

}

int main()
{
    
        solve();
  

    return 0;
}