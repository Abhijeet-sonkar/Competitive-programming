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
    cin>>n;
    vector<int> arr(n,0);
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    auto freq =equal_range(arr.begin(),arr.end(),arr[0]);
    if((freq.second-freq.first)==n)
    cout<<n<<endl;
    else
    {
        cout<<"1"<<endl;
    }
    

}

int main()
{
    init();
    int t;
    cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}