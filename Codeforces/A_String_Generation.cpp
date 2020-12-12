#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
  int n,k;
  cin>>n>>k;

  for (int i = 1; i <=n; i++)
  {
         if(i%3==1)
          cout<<"a";
        else if(i%3==2)cout<<"b";
        else cout<<"c";
  }
 
  
  cout<<endl;
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