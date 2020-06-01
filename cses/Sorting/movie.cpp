#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int n;
    cin>>n;
    
    int x,y;
    vector<pair<int,int>> r;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
         r.push_back({y,x});
    }
   
   sort(r.begin(),r.end());
    int cur=0;
    int ans=0;
    for (auto i:r)
    {
        
        if(i.second>=cur)
        {
            ans++;
            cur=i.first;

        }


 
    }
  
      cout<<ans<<endl;

}

int main()
{
    
        solve();
   
    return 0;
}