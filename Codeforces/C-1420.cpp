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
    int minSkip[n][2];
    memset(minSkip, sizeof(minSkip), 10);
    if (arr[0] == 1)
    {
        minSkip[0][0] = 1;
        minSkip[0][1] = 1;
    }
    if(n>1)
    {
        if(arr[1]==1)
        {
            minSkip[1][0]=min(minSkip[0][0]+1,minSkip[0][1]);
            minSkip[1][1]=minSkip[1][0];
        }
        else
        {
            minSkip[1][0]=minSkip[1][1]=minSkip[0][1];
        }
        
    }
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 1)
        {
            minSkip[i][1] = min(minSkip[i - 1][1] + minSkip[i - 2][0], minSkip[i - 1][0]);
            minSkip[i][0]=min(1+minSkip[i-1][0]+minSkip[i-2][1],minSkip[i-1][1]);
        }
        else
        {
             minSkip[i][1] = min(minSkip[i - 1][1] + minSkip[i - 2][0], minSkip[i - 1][0]);
             minSkip[i][0]=min(minSkip[i-1][0]+minSkip[i-2][1],minSkip[i-1][1]);
        }
        
    }
    cout<<min(minSkip[n-1][0],minSkip[n-1][1])<<endl;
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