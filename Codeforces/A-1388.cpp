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
    if (n <= 30)
        cout << "NO" << endl;
    else
    {
        if (n == 44 || n == 40)
        {
            cout << "YES" << endl;
            cout << "21 10 6 " << n - 37 << endl;
        }
        else if (n == 36)
        {
            cout << "YES" << endl;
            cout << "10 15 6 " << n - 31 << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << "14 10 6 " << n - 30 << endl;
        }
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