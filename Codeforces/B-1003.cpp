#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<char> ans(a+b);
    if(a>b)
   { ans[0]='0';
     a--;
   }
    else
    {
        ans[0]='1';
        b--;
    }
    for (int i = 1; i <c; i++)
    {
        if(ans[i-1]=='0')
        {
            ans[i]='1';
            b--;
        }
        else
        {
            ans[i]='0';
            a--; 
        }
        
    }
    if(ans[c-1]=='0')
    {
        for (int i = c; i <c+a; i++)
        {
            ans[i]='0';

        }
        for (int i = c+a; i <c+a+b; i++)
        {
        ans[i]='1';
        }
        
        
    }
    else
    {
        for (int i = c; i <c+b; i++)
        {
        ans[i]='1';
        }
         for (int i = c+b; i <c+b+a; i++)
        {
            ans[i]='0';

        }
    }
    
    for (auto i:ans)
    {
        cout<<i;
    }
    cout<<endl;
    
}

int main()
{

    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}