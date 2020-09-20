#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i]==x)
        count++;

        sum+=(arr[i]-x);
    }
    if(count==n)
    cout<<"0"<<endl;
    else if(sum==0||count>0)
    cout<<"1"<<endl;
    else
    {
        cout<<"2"<<endl;
    }
    

   
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