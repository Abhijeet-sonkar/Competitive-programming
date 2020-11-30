#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    int t = 1;
    map<int, int> num;
    int N = n;
    int nine = 0;
    vector<int> digit;
    while (n)
    {
        digit.push_back(n % 10);
        num[n % 10]++;
        n /= 10;
        nine += t * 9;
        t *= 10;
    }
    sort(digit.begin(), digit.end());
    int limit = 0;
    int r = 1;
    int cache = 0;
    for (int i = 0; i < digit.size(); i++)
    {
        // cout<<digit[i]<<"heelp ";
        limit += digit[i] * r;
        // cout<<limit<<endl;
        r *= 10;
    }
    //  cout<<limit<<endl;
    t /= 10;
    // cout << t << " " << nine << endl;
    int j = 0;
    bool ans = false;
    map<int, int> num2;
    for (int i = t; i <= limit; i++)
    {
        j = i;
        num2.clear();
        while (j)
        {
            num2[j % 10]++;
            j /= 10;
        }
        if (i % 8 == 0)
        {
            ans = true;
            for (int k = 1; k <= 9; k++)
            {
                if (num[k] != num2[k])
                    ans = false;
            }
            if (ans)
            {  
                
                break;
               
            }
        }
    }
  //  cout << cache << " " << limit << endl;
    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}