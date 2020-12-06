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
    cin >> n;
    if (n % 1000 == 0)
        cout << "0" << endl;
    else
    {
        cout << 1000 - n % 1000 << endl;
    }
}

int main()
{
    init();
    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}