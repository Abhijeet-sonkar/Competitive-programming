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

    if (n == 3)
    {
        cout<<"2\n3 2\n3 2\n";
        return;
    }

    if (n == 4)
    {
        cout<<"3\n3 4\n4 2\n4 2\n";
        return;
    }

    if (n < 9)
    {
        cout<<n<<endl;
        for (int i = 3; i <= n - 1; i++)
        {
            if (i == 4)
                continue;
            cout << i << " " << n << endl;
        }
        cout << n << " 4" << endl;
        cout << n << " 4" << endl;
        cout << "4 2" << endl;
        cout << "4 2" << endl;
        return;
    }

    cout << n + 5 << endl;
    for (int i = 3; i <= n - 1; i++)
    {
        if (i == 4 || i == 8)
            continue;
        cout << i << " " << n << endl;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << n << " "
             << "8" << endl;
    }

    cout << "8 4" << endl;
    cout << "8 4" << endl;

    cout << "4 2" << endl;
    cout << "4 2" << endl;
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