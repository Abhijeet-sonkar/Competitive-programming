#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

int power(int a, int b)
{
    int res = 1;
    while (b)
    {
        res *= a;
        --b;
    }
    return res;
}
void solve()

{
    int n, m;
    cin >> n >> m;
    vector<int> digit(n + 1, 0);
    int a, b;
    bool valid = true;
    bool visited[n + 1];
    memset(visited, false, sizeof(visited));
    while (m)
    {
        cin >> a >> b;
        if (a == 1 && b == 0 && n > 1)
            valid = false;

        if (visited[a] && digit[a] != b)
            valid = false;
        if (!visited[a])
        {
            digit[a] = b;
            visited[a] = true;
        }
        --m;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += digit[i] * (power(10, n - i));
    }
    if (n == 2 && (ans / 10) == 0)
        ans += 10;

    // if(n==3&&(ans/10)==0)ans+=100;

    if (n == 3 && (ans / 10) < 10)
        ans += 100;

    if (valid)
        cout << ans << endl;
    else
    {
        cout << "-1" << endl;
    }
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