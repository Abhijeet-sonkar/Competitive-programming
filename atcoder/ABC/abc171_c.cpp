#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

ll log26(ll n)
{
    ll count=0;
    while(n)
    {
        n/=26;
        count++;
    }
    return count-1;
}


void solve()
{
    ll n;
    cin>>n;
    string s;
    
    vector<char> answer;
    while(n)
    {
        n--;
        char c='a'+n%26;
        answer.push_back(c);
        n/=26;

    }
    reverse(answer.begin(),answer.end());
    for (auto i:answer)
    {
        cout<<i;
    }
    cout<<endl;
     

}

int main()
{
    
    int t=1;
    //cin>>t;
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}