#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void solve()
{
    int n;
    cin >> n;
    bool lose = (n == 1);
    if (n > 2 && n % 2 == 0)
    {
        if ((n & (n - 1)) == 0)
            lose = 1;
        else if (n % 4 != 0 && isPrime(n / 2))
        {
            lose = 1;
        }
    }
    if (lose)
    {
        cout << "FastestFinger" << endl;
    }
    else
    {
        cout << "Ashishgup" << endl;
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