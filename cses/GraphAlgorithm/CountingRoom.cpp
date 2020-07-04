#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
const int maxSize = 1001;
char grid[maxSize][maxSize];
int visited[maxSize][maxSize];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n;
int m;
bool isValid(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return false;

    if (grid[x][y] == '#' || visited[x][y] == 1)
        return false;

    return true;
}
void dfs_grid(int x, int y)
{
    visited[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        if (isValid(x + dx[i], y + dy[i]))
        {
            dfs_grid(x + dx[i], y + dy[i]);
        }
    }
}

void solve()
{
    cin >> n >> m;
  
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int countRoom = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (grid[i][j] == '.' && visited[i][j] == 0)
            {
                countRoom++;
                dfs_grid(i, j);
                
            }
        }
    }
    cout<<countRoom<<endl;
}

int main()
{

    solve();

    return 0;
}