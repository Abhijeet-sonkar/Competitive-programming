#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int> answer;
    answer.push_back(arr[0]);
    for (int i = 1; i < n-1; i++)
    {
        if(((arr[i+1]-arr[i])>0&&arr[i]-arr[i-1]<0)||((arr[i+1]-arr[i])<0&&arr[i]-arr[i-1]>0))
        {
            answer.push_back(arr[i]);
        }
    }
   answer.push_back(arr[n-1]);
   cout<<answer.size()<<endl;
   for (auto i:answer)
   {
       cout<<i<<" ";
   }
   cout<<endl;

}

int main()
{
 
    int t;
    cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}