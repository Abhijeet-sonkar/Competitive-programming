#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int index = 0;
    vector<int> distance;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
            distance.push_back(i);
    }

    if (distance.size() == 0)
    {
        int answer = 0;
        for (int i = 0; i < s.size(); i += (k + 1))
        {
            answer++;
        }
        cout << answer << endl;
    }
    else
    {

        int answer = 0;

        auto start = distance.begin();
        auto end = distance.end();
        if (*start != 0)
        {
            for (int i = 0; i < *start; i += (k + 1))
            {
                if (*start - i < (k + 1))
                    break;

                answer++;
            }
        }

        for (auto i = start; i != distance.end(); i++)

        {
            if (i + 1 == end)
                break;
            int up = *(i + 1);

            for (int j = *i + 1 + k; j < up; j += (k + 1))
            {
                if (up - j < (k + 1))
                    break;

                answer++;
            }
        }
        if (*(end - 1) != s.size() - 1)
        {
            for (int i = *(end - 1); i < s.size(); i += (k + 1))
            {

                answer++;
            }
            answer--;
        }

        cout << answer << endl;
    }
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