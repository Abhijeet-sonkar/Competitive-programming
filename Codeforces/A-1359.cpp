#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int  card=n/k;

    if(m<=card)
    cout<<m<<endl;
    else
    {
       int rem=(m-card)%(k-1);
       int ans=card-((m-card)/(k-1));
       if(rem==0)
       cout<<ans<<endl;
       else
       {
           cout<<ans-1<<endl;
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