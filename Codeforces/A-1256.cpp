#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



int solve()
{

  ll a,b,n,S;
  cin>>a>>b>>n>>S;
  if((a*n+b)<S)
  return -1;
 
  if((a*n+b)==S)
  return 1;
  
  if((a*n)>S)
  {
      int rem=S%n;
      if(rem<=b)
      return 1;

      return -1;
  }


  if((S-(a*n))<=b)
  return 1;

  return -1;


  
}

int main()
{
   
    int t;
    cin>>t;
    while(t)
    {

        
        int answer=solve();
        if(answer==1)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        
        --t;
    }

    return 0;
}