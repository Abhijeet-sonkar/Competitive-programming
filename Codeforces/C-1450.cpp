#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    char tic[305][305];
    char op[6][305][305];

    int totalx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tic[i][j];
            if (tic[i][j] == 'X')
                totalx++;

            for (int k = 0; k < 6; k++)
            {
                op[k][i][j] = tic[i][j];
            }
        }
    }
    int arr[3] = {0};
    arr[1] = 1;
    arr[2] = 2;
    int start = 0;
    bool valid = true;
    int end = 0;
    int count = 0;
    int index = 0;
    int n2 = sizeof(arr) / sizeof(arr[0]);
    do
    {
        count=0;
        for (int i = 0; i < n; i++)
        {
            if (i % 3 == 0)
            {
                start = arr[0];
            }
            else if (i % 3 == 1)
                start = arr[1];
            else
                start = arr[2];
            for (int j = start; j < n; j += 3)
            {
                if (tic[i][j] == 'X')
                {
                    op[index][i][j] = 'O';
                    count++;
                }
            }
        }
        if (count <= (totalx / 3))
        {
           // cout << totalx / 3 << endl;
            end = index;
        }
        // cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

        index++;
    } while (next_permutation(arr, arr + n2));
    //cout << "hellp" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << op[end][i][j];
        }
        cout << endl;
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
