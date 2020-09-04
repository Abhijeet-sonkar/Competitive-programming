#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char ans=s[n-1];
    for(int i=0;i<n;i++)
    {
      cout<<ans;
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