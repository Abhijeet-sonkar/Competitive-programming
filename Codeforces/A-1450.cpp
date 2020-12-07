#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;



void solve()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    int t=0;
    for (int i = 0; i < n; i++)
    {
         if(s[i]=='t')t++;
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i]!='t')cout<<s[i];
    }
    for (int i = 0; i < t; i++)
    {
        cout<<"t";
    }
    cout<<endl;
    

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