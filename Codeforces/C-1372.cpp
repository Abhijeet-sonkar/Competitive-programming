#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if(arr[i]==i)
        count++;
    }
     
    if (count == n)
        cout << "0" << endl;
    else if (count == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        int start = 0;
        int end = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] != i)
            {
                
                start = i;
                break;
            }
        }

        for (int i = n; i > 0; i--)
        {
            if (arr[i] != i)
            {
               
                end = i;
                break;
            }
        }
        int count = 0;
        for (int i = start; i <= end; i++)
        {
            if (arr[i] == i)
                count++;
        }
     
        if (count == 0)
            cout << "1" << endl;
        else
        {
            cout << "2" << endl;
        }
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