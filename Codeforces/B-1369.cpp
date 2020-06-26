#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{

    int n;
    string s;
    cin >> n;
    cin >> s;
    int zero = 0;
    int endIndex = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            zero++;
            endIndex = i;
        }
    }
    int flag = -1;
    for (int i = 0; i < endIndex; i++)
    {
        if (s[i] == '1')
        {
            
            flag = i;
            break;
        }
    }
    if (zero == 0 ||flag==-1)
        cout << s << endl;
    else
    {
        for (int i = 0; i < flag; i++)
        {
            cout<<s[i];
        }
        
        for (int i = endIndex; i < s.size(); i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}