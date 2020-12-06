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
     string s;
     cin>>n;
     cin>>s;
     int red=0;
     int white=0;
     for (auto i:s)
     {
            if(i=='R')red++;
            else white++;
     }
     red =0;
     for (int i = n-white; i < n; i++)
     {
         if(s[i]=='R')red++;
     }
     cout<<red<<endl;
     
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