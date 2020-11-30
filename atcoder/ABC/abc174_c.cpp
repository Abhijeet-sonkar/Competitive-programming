#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int k;
    cin>>k;
    int seven=0;
    int ans=-1;
    for (int i = 1; i <=1e7; i++)
    {
        seven=(10*seven+7)%k;
        if(seven==0){
            ans=i;
            break;
        }
              
    }
    cout<<ans<<endl;
    

}

int main()
{
    init();
    int t=1;
    
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}