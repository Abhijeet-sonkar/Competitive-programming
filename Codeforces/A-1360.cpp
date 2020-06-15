#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int a,b;
    cin>>a>>b;
    int m=min(a,b);
    int m1=max(a,b);
    if(m1<m*2)
    cout<<pow(m*2,2)<<endl;
    else
    {
        cout<<pow(m1,2)<<endl;
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