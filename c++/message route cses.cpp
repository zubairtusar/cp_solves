#include<bits/stdc++.h>
using namespace std;

struct node
{
    struct node* parent;
    int num;
    node()
    {
        parent = NULL;
        num = NULL;
    }
};

std::map<int,std::list<int>> mapp;
int vis[100005] = {0};

void print(std::list<int> const &list)
{
    for (auto const &i: list)
    {
        std::cout << i << std::endl;
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

    struct node* parent_node = new node();
    parent_node->parent = NULL;
    parent_node->num = 1;

    bool found = false;
    queue<struct node*> conns;
    conns.push(parent_node);

    do
    {
        struct node* temp = conns.front(); conns.pop();
        //cout << "new iter; i: " << temp->num << endl;
        if(temp->num == n)
        {
            found = true;
            parent_node = temp;
            break;
        }
        for (auto const &i: mapp[temp->num])
        {
            //cout << "   connections; i: " << i << endl;
            if( vis[i] == 1) continue;
            vis[i] = 1;
            struct node* child_node = new node();
            child_node->parent = temp;
            child_node->num = i;
            conns.push(child_node);
        }
    }
    while(!conns.empty());

    if(!found)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        vector<int> result;
        vector<int>::iterator itr;
        while(true)
        {
            result.push_back(parent_node->num);
            if(parent_node->num == 1) break;
            parent_node = parent_node->parent;
        }
        cout << result.size() << endl;
        for(itr=result.end()-1; itr>=result.begin(); itr--) cout << *itr << " ";
    }
}

