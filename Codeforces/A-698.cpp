#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int minDays[101][3] = {0};
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            minDays[i][j] = 1e9;
        }
    }
    minDays[0][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        minDays[i][0] = 1 + min(minDays[i - 1][0], min(minDays[i - 1][1], minDays[i - 1][2]));
        if (arr[i - 1] == 1 || arr[i - 1] == 3)
            minDays[i][1] = min(minDays[i - 1][0], minDays[i - 1][2]);

        if (arr[i - 1] == 2 || arr[i - 1] == 3)
            minDays[i][2] = min(minDays[i - 1][0], minDays[i - 1][1]);
    }

    cout << min(minDays[n][0], min(minDays[n][1], minDays[n][2])) << endl;
}

int main()
{

    solve();

    return 0;
}