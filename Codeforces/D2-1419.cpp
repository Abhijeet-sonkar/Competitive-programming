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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int last = n - 1;
    int start = 0;

    vector<int> answer(n, 0);

    for (int i = 1; i < n; i += 2)
    {
        answer[i] = arr[start];
        start++;
    }
    for (int i = 0; i < n; i += 2)
    {
        answer[i] = arr[start];
        start++;
    }

    int count = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if ((answer[i - 1] > answer[i]) && (answer[i + 1] > answer[i]))
        {

            count++;
        }
    }

    cout << count << endl;
    for (auto i : answer)
    {
        cout << i << " ";
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