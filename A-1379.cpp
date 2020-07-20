#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string sec = s;
    string test = "abacaba";
    int count = 0;
    for (int i = 0; i <= s.size() - 7; i++)
    {
        int j;
        for (j = 0; j < 7; j++)
        {
            if (s[i + j] != test[j])
                break;
        }

        if (j == 7)
        {
            count++;
            j = 0;
        }
    }
    if (count > 1)
    {

        cout << "No" << endl;
    }
    else if (count == 1)
    {
        cout << "Yes" << endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
                cout << 'd';
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    else
    {
        bool complete = false;
        bool flag=false;
        for (int i = 0; i <= s.size() - 7; i++)
        {
            int j = 0;
            if (s[i] == '?' || s[i] == 'a' && (s[i + 6] == '?' || s[i + 6] == 'a'))
            {
                if (s[i] == '?')
                    s[i] = 'a';

                if (s[i + 6] == '?')
                    s[i + 6] = 'a';

                if (s[i + 1] == '?')
                    s[i + 1] = 'b';
                if (s[i + 5] == '?')
                    s[i + 5] = 'b';
                if (s[i + 2] == '?')
                    s[i + 2] = 'a';
                if (s[i + 4] == '?')
                    s[i + 4] = 'a';
                if (s[i + 3] == '?')
                    s[i + 3] = 'c';
                int k = 0;
                for (k = 0; k < 7; k++)
                {
                    if (s[k + i] != test[k])
                    {
                        complete = false;
                        break;
                    }
                }
                if (k == 7)
                    complete = true;
                else
                {
                    s = sec;
                }
            }
            if (complete == true)
            {
                count = 0;
                for (int i = 0; i <= s.size() - 7; i++)
                {
                    int j;
                    for (j = 0; j < 7; j++)
                    {
                        if (s[i + j] != test[j])
                            break;
                    }

                    if (j == 7)
                    {
                        count++;
                        j = 0;
                    }
                }
                if (count > 1)
                {
                    s = sec;
                    complete = false;
                }
                else
                {
                    break;
                }
                
            }
        }
        if (complete == true)
        {
            count = 0;
            for (int i = 0; i <= s.size() - 7; i++)
            {
                int j;
                for (j = 0; j < 7; j++)
                {
                    if (s[i + j] != test[j])
                        break;
                }

                if (j == 7)
                {
                    count++;
                    j = 0;
                }
            }
            if (count > 1)
                cout << "No" << endl;
            else
            {

                cout << "Yes" << endl;
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == '?')
                        cout << 'd';
                    else
                    {
                        cout << s[i];
                    }
                }
                cout << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
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