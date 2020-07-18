#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

int cal(const string &s, char c)
{
    if (s.size() == 1)
        return s[0] != c;

    int mid = s.size() / 2;
    int c1 = cal(string(s.begin(), s.begin() + mid), c + 1);
    c1 += s.size() / 2 - count(s.begin() + mid, s.end(), c);
    int c2 = cal(string(s.begin() + mid, s.end()), c + 1);
    c2+=s.size() / 2 - count(s.begin() , s.begin()+mid, c);

    return min(c1,c2);
}
void solve()
{

    int n;
    cin>>n;
    string s;
    cin >> s;
    cout<<cal(s,'a')<<endl;;
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