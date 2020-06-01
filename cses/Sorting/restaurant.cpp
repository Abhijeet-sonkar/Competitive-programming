
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;
    map<int,int> m;
    int x,y;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        m[x]=1;
        m[y]=-1;   
    }
    int curSum=0;
    int ans=INT_MIN;
   

    for (auto i=m.begin();i!=m.end();i++)
    {
        curSum+=i->second;
        ans=max(ans,curSum);
    }
  
      cout<<ans<<endl;

}

int main()
{
    
        solve();
   
    return 0;
}