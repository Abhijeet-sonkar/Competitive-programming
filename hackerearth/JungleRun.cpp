#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
const int maxSize = 1001;
char grid[maxSize][maxSize];
int visited[maxSize][maxSize];
int dis[maxSize][maxSize];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n;
bool isValid(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > n)
        return false;

    if (grid[x][y] == 'T' || visited[x][y] == 1)
        return false;

    return true;
}
void bfs_grid(int x, int y)
{
    visited[x][y] = 1;
    dis[x][y]=0;
    queue<pair<int, int>> edge;
    edge.push({x, y});
    while (!edge.empty())
    {
        int curx = edge.front().first;
        int cury = edge.front().second;
        edge.pop();

        for (int i = 0; i < 4; i++)
        {
            if (isValid(curx + dx[i], cury + dy[i]))
            {

               dis[curx+dx[i]][cury+dy[i]]=1+dis[curx][cury];
               visited[curx+dx[i]][cury+dy[i]]=1;
               edge.push({curx + dx[i],cury + dy[i]});
            }
        }
    }
}

void solve()
{
    cin >> n;
    int startX, startY;
    int endX, endY;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'S')
            {
                startX = i;
                startY = j;
            }
            if (grid[i][j] == 'E')
            {
                endX = i;
                endY = j;
            }
        }
    }
    bfs_grid(startX,startY);
    cout<<dis[endX][endY]<<endl;
}

int main()
{

    solve();

    return 0;
}