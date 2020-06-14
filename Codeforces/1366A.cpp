#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int a,b;
    cin>>a>>b;
    int m=min(a,min(b,(a+b)/3));
    cout<<m<<endl;

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