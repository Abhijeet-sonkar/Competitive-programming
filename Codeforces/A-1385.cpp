#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int arr[3];
    map<int, int> m;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    sort(arr, arr + 3);
    if (m[arr[2]] == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << arr[2] <<" "<< arr[0] << " " <<arr[0] << endl;
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