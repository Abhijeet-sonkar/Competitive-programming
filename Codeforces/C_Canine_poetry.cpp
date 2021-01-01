#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
  string s;
  cin>>s;

  int ans=0;
  for (int i = 1; i <s.size(); i++)
  {

      if(s[i]==s[i-1]||(i>=2&&s[i]==s[i-2])) s[i]='@',ans++;
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