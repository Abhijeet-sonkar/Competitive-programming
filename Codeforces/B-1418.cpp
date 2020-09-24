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
    int arr[n];
    bool isLocked[n];
    priority_queue<int,vector<int>> m;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int a;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        if(a==1)
        {
            isLocked[i]=true;
        }
        else
        {
            isLocked[i]=false;
            m.push(arr[i]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if(!isLocked[i])
        {
            cout<<m.top()<<" ";
            m.pop();
        }
        else
        {
            cout<<arr[i]<<" ";
        }
        
    }
    
    cout<<endl;
    

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