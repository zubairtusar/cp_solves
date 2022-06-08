#include<bits/stdc++.h>
using namespace std;

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

struct node{
    struct node* parent;
    int mov;
    pair<int, int> index;
    node(){
        parent = NULL;
        mov = NULL;
        index = pair<int, int>(NULL, NULL);
    }
};

long long int n, m;
long long int visited[1005][1005] = {0};
char tiles[1005][1005];

int movementX[4] = { 1, 0, -1, 0};
int movementY[4] = { 0, 1, 0, -1};
string movement = "RDLU";

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

int main()
{
    int dotcount = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> tiles[i][j];
            if( tiles[i][j] == '.') dotcount++;
        }
    }
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if( tiles[i][j] == 'A') break;
        }
        if( tiles[i][j] == 'A') break;
    }

    queue<pair<int, int>> q1;
    queue<int> q2;
    queue<struct node*> nodes;
    pair<int, int> curr_index;
    int x = j, y = i, newX, newY;
    struct node* parent_node = new node();
    parent_node->parent = NULL;
    parent_node->index = pair<int, int>( i, j);
    while( true )
    {
        //cout << "new iter x: " << x << " y: " << y << endl;
        for(int i=0; i<4; i++)
        {
            newX = x + movementX[i];
            newY = y + movementY[i];
            if( visited[newY][newX] == 1 || tiles[newY][newX] == '#' || tiles[newY][newX] == 'A' || newX >= m || newX < 0 || newY >= n || newY < 0 ) continue;
            visited[newY][newX] = 1;
            dotcount--;
            //cout << dotcount << endl;

            struct node* child_node = new node();
            child_node->parent = parent_node;
            child_node->mov = i;
            child_node->index = pair<int, int>( newY, newX);

            nodes.push(child_node);

            //cout << " newX: " << newX << " newY: " << newY << endl;

            if(tiles[newY][newX] == 'B')
            {
                parent_node = child_node;
                break;
            }
        }
        parent_node = nodes.front(); nodes.pop();

        curr_index = parent_node->index;

        x = curr_index.second;
        y = curr_index.first;

        if( tiles[y][x] == 'B' )
        {
            //cout << "waba" << endl;
            break;
        }
        if( dotcount == 0 ){
            cout << "NO" << endl;
            return 0;
        }
    }
    vector<char> res;
    vector<char>::iterator itr;
    cout << "YES" << endl;
    while(true)
    {
        pair<int, int> temp_index = parent_node->index;
        if( tiles[temp_index.first][temp_index.second] == 'A') break;
        int temp = parent_node->mov;
        res.push_back(movement[temp]);
        parent_node = parent_node->parent;
    }
    cout << res.size() << endl;
    for( itr=res.end()-1; itr>=res.begin(); itr--) cout << *itr ;
}
//   01234567
/*
01234567
5 8
.#######
#.A...##
#.####.B
#.#...#.
#...#...
*/
