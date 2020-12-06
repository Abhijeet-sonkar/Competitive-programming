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
 if(n==1)cout<<"0";
 else if(n==2)cout<<"1";
 else if(n==3)cout<<"2";
 else if(n%2==0) cout<<"2";
 else
 {
     cout<<"3";
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