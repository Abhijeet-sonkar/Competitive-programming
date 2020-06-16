#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    int oddCount=0;
    for (int i = 0; i < n; i++)
    {
         cin>>arr[i];
         if(arr[i]%2!=0)
         oddCount++;
    }
    int evenCount=n-oddCount;
    if(oddCount<x)
    {
        if((oddCount%2==0)&&evenCount<(x-oddCount+1)||oddCount==0)
        cout<<"No"<<endl;
        else
        {
            cout<<"Yes"<<endl;
        }
        
    }
    else
    {
      if(x%2!=0)
      cout<<"Yes"<<endl;
      else
      {
          if(evenCount>=1)
          cout<<"Yes"<<endl;
          else
          {
              cout<<"No"<<endl;
          }
          
      }
      
    }
    
            
            


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