#include<bits/stdc++.h>
using namespace std;

std::map<int,std::list<int>> mapp;
int vis[100005] = {0};
int color[100005] = {0};
bool possible = true;

void print(std::list<int> const &list)
{
    for (auto const &i: list) {
        std::cout << i << std::endl;
    }
}

void dfs(int x, int clr)
{
    //cout << "iter => " << x << " " << clr << " " << color[x] <<endl;

    if(vis[x] == 1)
    {
        if(color[x] == clr)
        {
            possible = false;
            return;
        }
        return;
    }

    int clr2;
    if(clr == 1) clr2 = 2;
    if(clr == 2) clr2 = 1;

    if(color[x] == 0) color[x] = clr2;
    vis[x] = 1;

    for (auto const &i: mapp[x]) {
        //cout << " here ";
        dfs(i, clr2);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin >> x >> y;
        mapp[x].push_back(y);
        mapp[y].push_back(x);
    }

    for(int i=1; i<=n; i++)
    {
        if(vis[i]!=1)
        {
            dfs(i, 2);
        }
    }

    if(possible)
    {
        for(int i=1; i<=n; i++)
        {
            cout << color[i] << " ";
        }
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}
