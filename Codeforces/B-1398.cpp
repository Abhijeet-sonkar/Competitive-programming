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
   vector<int> ones;
   int count=0;
   for (int i = 0; i < s.length(); i++)
   {
       if(s[i]=='1')
       {
           count=0;
             while (s[i]=='1'&&i<s.length())
             {
                 count++;
                 i++;
             }
             ones.push_back(count);
             
       }
   }
   sort(ones.begin(),ones.end(),greater<int>());
   int x=0;
   int ans=0;
   for (auto i:ones)
   {
       if(x%2==0)
       ans+=i;

       x++;
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