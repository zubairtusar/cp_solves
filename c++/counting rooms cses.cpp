#include<bits/stdc++.h>
using namespace std;

long long int n, m;
long long int visited[1005][1005] = {0};
char tiles[1005][1005];

int movementX[4] = { 1, 0, -1, 0};
int movementY[4] = { 0, 1, 0, -1};

int rooms = 0, newX,newY;

void print_tiles()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << tiles[i][j];
        }
        cout << endl;
    }
}

void dfs(int x, int y)
{
    for(int i=0; i<4; i++)
    {
        newX = x + movementX[i];
        newY = y + movementY[i];
        if( visited[newY][newX] == 1 || tiles[newY][newX] == '#' || newX >= m || newX < 0 || newY >= n || newY < 0 ) continue;
        visited[newY][newX] = 1;
        dfs(newX, newY);
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> tiles[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(tiles[i][j] == '.' && visited[i][j] != 1){
                    dfs( j, i);
                    rooms++;
            }
        }
    }
    cout << rooms;
}
