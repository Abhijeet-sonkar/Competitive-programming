#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
        cout << "First" << endl;
    else
    {
        int start = 1;
        while(start<n&&arr[start]==1)
        {
            start++;
        }
        if(start%2!=0)
        cout<<"First"<<endl;
        else
        {
            cout<<"Second"<<endl;
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