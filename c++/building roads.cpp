#include<bits/stdc++.h>
using namespace std;

std::map<int,std::list<int>> mapp;
int vis[100005] = {0};
vector<int> new_roads;

void print(std::list<int> const &list)
{
    for (auto const &i: list) {
        std::cout << i << std::endl;
    }
}

void dfs(int x)
{
    if(vis[x] == 1) return;
    vis[x] = 1;
    for (auto const &i: mapp[x]) {
        dfs(i);
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
            new_roads.push_back(i);
            dfs(i);
        }
    }
    vector<int>::iterator itr;
    cout << new_roads.size() - 1 << endl;
    for( itr=new_roads.begin(); itr<new_roads.end()-1; itr++)
        cout << *itr << " " << *(itr+1) << endl;
}
