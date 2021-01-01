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
    if(s.size()%2==1)
    {
        cout<<"NO"<<endl;
        return;

    }

    if(s[0]==')'||s[s.size()-1]=='(')
    {
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    
    
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