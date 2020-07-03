#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int a;
    cin >> a;

    if (a == 1)
        cout << "1 2" << endl;
    else
    {
        if (a % 2 == 0)
        {
            if ((a / 2) % 2 == 0)
                cout << a/2 - 1 << " " << a/2 + 1 << endl;
            else
            {
                cout << a/2 - 2 << " " << a/2 + 2 << endl;
            }
        }
        else
        {
            cout<<a/2<<" "<<(a/2)+1<<endl;
        }
    }
}

int main()
{

    solve();

    return 0;
}