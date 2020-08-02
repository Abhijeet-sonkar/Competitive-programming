#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int n;
int minMove(const string& s,int x,int y)
{
    int freq=0;
    for (auto i:s)
    {
        if(i-'0'==x)
        {
            freq++;
            swap(x,y);
        }
    }
    if(x!=y&&freq%2==1)
    freq--;

    return freq;
    
}

void solve()
{
    string s;
    cin>>s;
    n=s.size();
    int ans=0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            ans=max(ans,minMove(s,i,j));
        }
        
    }
    
     ans=n-ans;
     cout<<ans<<endl;

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