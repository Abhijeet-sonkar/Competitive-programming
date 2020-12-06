#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q)
    {
        int a, b;
        cin >> a >> b;
        bool valid=false;
        
        char test1=s[a-1];
        int start=a-2;
        while(start>-1)
        {
            if(s[start]==test1)valid=true;
            start--;
        }
        char test2=s[b-1];
        int end=b;
        while(end<n)
        {
            if(test2==s[end])valid=true;
            end++;

        }

        if(valid)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        --q;
    }
}

int main()
{
    init();
    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}