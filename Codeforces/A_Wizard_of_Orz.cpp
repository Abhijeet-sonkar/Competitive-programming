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
    if(n==1)
    {
        cout<<"9"<<endl;
        return;
    }

     for (int i = 1; i <= n; i++)
     {
         /* code */
         cout<<(8+abs(i-2))%10;
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