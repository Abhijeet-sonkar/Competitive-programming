#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    ll n,w;
    cin>>n>>w;
    ll require[200005]={0};
    int s,t,p;
    int end=0;
    for (int i = 0; i < n; i++)
    {
        cin>>s>>t>>p;
        require[s]+=p;
        require[t]-=p;
        end=max({end,s,t});
        
    }
    for (int i = 1; i <=end; i++)
    {
        require[i]+=require[i-1];
    }
    bool valid=true;
    for (int i = 0; i <= end; i++)
    {
        if(require[i]>w) valid=false;
    }
    if(valid)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
 
    
    

}

int main()
{
  
    int t=1;

    while(t)
    {
        solve();
        --t;
    }

    return 0;
}

