#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
  
  int a,k;
  cin>>a>>k;
  if(a<=k)
  cout<<k-a<<endl;
  else
  {
      if((a-k)%2==0)
      cout<<"0"<<endl;
      else
      {
          cout<<"1"<<endl;
      }
      
  }
  
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