//BINARY SEARCH

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int arr[1000001];
bool isValid(int k,int C,int n)
{
   
   int count=1;
   int prev=arr[0];
   
   for (int i = 1; i < n; i++)
   {
     
       if((arr[i]-prev)>=k)
       {
           count++;
           prev=arr[i];
       
       }

   }
   if(count>=C)
   return true;
   else
   return false;
   

}

void solve()
{
    int n,C;
    cin>>n>>C;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int high=arr[n-1]-arr[0];
    int k=-1;
   int answer=0;
    for (int b =high; b >=1; b/=2)
    {
    
        while (isValid(k+b,C,n))
        {
           
          k+=b;
          answer=max(answer,k);
        }
        
    }
    
    cout<<answer<<endl;

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