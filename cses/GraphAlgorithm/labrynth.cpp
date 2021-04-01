#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

int grid[1005][1005];
bool used[1005][1005];
ll dis[1005][1005];
int n, m;

bool safe(int i, int j)
{

    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    if (used[i][j] || grid[i][j] == 0)
        return false;

    return true;
}
void solve()
{

    cin >> n >> m;

    char in;
    pair<int, int> start;
    pair<int, int> end;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> in;
            if (in == '.')
                grid[i][j] = 1;
            else if (in == '#')
                grid[i][j] = 0;
            else if (in == 'A')
                grid[i][j] = 1, start.first = i, start.second = j;
            else if (in == 'B')
                grid[i][j] = 1, end.first = i, end.second = j;
        }
    }

    char path[n][m];
    memset(path, 'x', sizeof(path));

    queue<pair<int, int>> q;

    memset(used, false, sizeof(used));

    memset(dis, 0, sizeof(dis));

    q.push(start);

    used[start.first][start.second] = true;
    while (!q.empty())
    {

        pair<int, int> tmp = q.front();
        q.pop();

        int x = tmp.first;
        int y = tmp.second;
        if (safe(x, y + 1))
        {
            used[x][y + 1] = true;
            q.push({x, y + 1});
            dis[x][y + 1] = dis[x][y] + 1;
            path[x][y + 1] = 'R';
        }
        if (safe(x, y - 1))
        {
            used[x][y - 1] = true;
            q.push({x, y - 1});
            dis[x][y - 1] = dis[x][y] + 1;
            path[x][y - 1] = 'L';
        }
        if (safe(x + 1, y))
        {
            used[x + 1][y] = true;
            q.push({x + 1, y});
            dis[x + 1][y] = dis[x][y] + 1;
            path[x + 1][y] = 'D';
        }
        if (safe(x - 1, y))
        {
            used[x - 1][y] = true;
            q.push({x - 1, y});
            dis[x - 1][y] = dis[x][y] + 1;
            path[x - 1][y] = 'U';
        }
    }


    if(path[end.first][end.second]=='x')
    {
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
    cout<<dis[end.first][end.second]<<endl;

    int x=end.first;
    int y=end.second;
    string ans="";
    while(path[x][y]!='x')
    {
        if(path[x][y]=='L')
        {
            y++;
            ans+='L';
        }
          if(path[x][y]=='R')
        {
            y--;
            ans+='R';
        }
          if(path[x][y]=='U')
        {
            x++;
            ans+='U';
        }
          if(path[x][y]=='D')
        {
            x--;
            ans+='D';
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
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