#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i=n-1;
    while (i>0&&arr[i-1]>=arr[i])
    {
        i--;
    }
    while(i>0&&arr[i-1]<=arr[i])
    {
        i--;
    }
    cout<<i<<endl;

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