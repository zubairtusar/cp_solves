#include<bits/stdc++.h>
using namespace std;

std::map<int,std::list<int>> mapp;
int vis[100005] = {0};
int parent[100005] = {0};
bool possible = false;
int sv, ev;

void print(std::list<int> const &list)
{
    for (auto const &i: list) {
        std::cout << i << std::endl;
    }
}

void dfs(int x, int p)
{
    if(possible) return;
    //cout << "new iter-> " << x << " "  << p << endl;
    if(vis[x] == 1){
        //cout << " Here " << endl;
        if(parent[p] == x)
        {
            return;
        }
        if(parent[p] != x)
        {
            sv = x;
            ev = p;
            possible = true;
            return;
        }
    }
    vis[x] = 1;
    parent[x] = p;
    for (auto const &i: mapp[x]) {
        dfs(i, x);
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
            dfs(i, -1);
        }
    }

    if(possible)
    {
        vector<int> result;
        vector<int>::iterator itr;
        int cv = ev;
        while(true)
        {
            result.push_back(cv);
            if(cv == sv) break;
            cv = parent[cv];
        }
        cout << result.size()+1 << endl;
        cout << ev << " ";
        for( itr=result.end()-1; itr>=result.begin(); itr--)
            cout << *itr << " ";
    }
    else
    {
        cout << "IMPOSSIBLE" ;
    }
}
