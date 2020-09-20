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
    int last=n-1;
    int start=0;
    if(n%2==0)
    cout<<n/2-1<<endl;
    else
    {
       cout<<n/2<<endl;
    }
    
   
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            cout<<arr[last]<<" ";
            last--;
        }
        else
        {
            cout<<arr[start]<<" ";
            start++;
        }
        
    }
    cout<<endl;
}

int main()
{
    init();
    int t=1;
    
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}