#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int m, s;
    cin >> m >> s;

    int minPossible = 1;
    int maxPossible = m * 9;

    if (m == 1 && s == 0)
    {
        cout << "0 0" << endl;
        return;
    }
    if (s > maxPossible || s < minPossible)
    {
        cout << "-1 -1" << endl;
        return;
    }

    vector<int> mn;
    int mxSum = s;
    int n = m;
    bool mnFlag = false;
    bool mxFlag = false;
    int sum = s;
    while (m)
    {
        if (sum >= 10)
        {
            mn.push_back(9);
            sum -= 9;
        }
        else if (sum < 10 && m > 1)
        {
            mn.push_back(sum - 1);
            mnFlag = true;
            --m;
            break;
        }
        else if (sum < 10 && m == 1)
        {
            mn.push_back(sum);
            sum -= sum;
        }

        --m;
    }
    if (mnFlag)
    {
        for (int i = 0; i < m - 1; i++)
        {
            mn.push_back(0);
        }
        mn.push_back(1);
    }

    reverse(mn.begin(), mn.end());
    for (auto i : mn)
    {
        cout << i;
    }
    cout << " ";
    vector<int> mx;
    while (n)
    {
        if (mxSum >= 10)
        {
            mx.push_back(9);
            mxSum -= 9;
        }
        else if (mxSum < 10 && n > 1)
        {
            mx.push_back(mxSum);
            mxFlag = true;
            mxSum -= mxSum;
            --m;
            break;
        }
        else if (mxSum < 10 && n == 1)
        {
            mx.push_back(mxSum);
            mxSum -= mxSum;
        }
        --n;
    }
    if (mxFlag)
    {
        for (int i = 0; i < n - 1; i++)
        {
            mx.push_back(0);
        }
    }
    for (auto i : mx)
    {
        cout << i;
    }
    cout << endl;
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