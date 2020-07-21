#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int activity[n][3];
    for (int i = 0; i < n; i++)
    {
        cin >> activity[i][0] >> activity[i][1] >> activity[i][2];
    }
    ll happiness[n][3] = {0};
    happiness[0][0] = activity[0][0];
    happiness[0][1] = activity[0][1];
    happiness[0][2] = activity[0][2];
    for (int i = 1; i < n; i++)
    {
        happiness[i][0]=activity[i][0]+max(happiness[i-1][2],happiness[i-1][1]);
        happiness[i][1]=activity[i][1]+max(happiness[i-1][2],happiness[i-1][0]);
        happiness[i][2]=activity[i][2]+max(happiness[i-1][1],happiness[i-1][0]);
    }
    cout<<max({happiness[n-1][0],happiness[n-1][1],happiness[n-1][2]})<<endl;
}

int main()
{

    solve();

    return 0;
}