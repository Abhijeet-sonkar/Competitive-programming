#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int dp[20][9 * 20];
vector<int> digit;
int k;
int  init(int i,int sum)
{
    if(sum>0&&sum%3==0) return 0;
    if(i==k) return 1e9;
    if(dp[i][sum]!=-1) return dp[i][sum];

    return dp[i][sum]=min(init(i+1,sum),1+init(i+1,sum-digit[i]));
}

void solve()
{
    ll n;
    cin >> n;
    int sum=0;
    while (n)
    {
        digit.push_back(n % 10);
        sum+=(n%10);
        n /= 10;
    }
    memset(dp, -1, sizeof(dp));

     k = digit.size();
    int ans = init(0,sum);
    if(ans==1e9) cout<<"-1"<<endl;
    else cout<<ans<<endl;
     
}

int main()
{

    int t = 1;
    //cin>>t;
    while (t)
    {
        solve();
        --t;
    }

    return 0;
}