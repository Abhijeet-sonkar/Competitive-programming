#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{

   int n,target;
   cin>>n>>target;
   int steps[n];
   for (int i = 0; i < n; i++)
   {
       cin>>steps[i];
   }
   int curr=0;
   for (int i = 1; i < n; i++)
   {
       if(steps[i]+steps[i-1]<target)
       {
         curr+=(target-(steps[i]+steps[i-1]));
         steps[i]+=(target-(steps[i]+steps[i-1]));
       }
   }
   cout<<curr<<endl;
   for (int i = 0; i < n; i++)
   {
       cout<<steps[i]<<" ";
   }
   
   

}

int main()
{
 
        solve();
   

    return 0;
}