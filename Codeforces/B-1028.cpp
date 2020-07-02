#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{
    int a,b;
    cin>>a>>b;
    string s="9";
    for (int i = 0; i < 125; i++)
    {
        s.append("9");
    }
  
    string s2=s;
    for (int i = 0; i < 125; i++)
    {
        s2.append("0");
    }
    s2.append("1");
    cout<<s<<endl;
    cout<<s2<<endl;
    
 
}

int main()
{
    
        solve();
    
    return 0;
}