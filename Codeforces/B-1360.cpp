#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
           cin>>arr[i];
   }
   sort(arr,arr+n);
   int m=1000;
   for (int i = 1; i <n ; i++)
   {
       m=min(m,arr[i]-arr[i-1]);
   }
   cout<<m<<endl;
   
   
}

int main()
{
   
    int t;
    cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}