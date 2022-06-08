// you can use includes, for example:
// #include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int visited[25][25] = {0};
char room[25][25];
int steps = 0;
int N, M;

int movementsX[4] = { 1, 0, -1, 0 };
int movementsY[4] = { 0, 1, 0, -1 };

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
void dfs(int x, int y, int i){
    if( x < M && y < N ){
        //cout << y << " "<< x << " " << room[y][x] <<  " " << i << endl;
        int newX = x + movementsX[i];
        int newY = y + movementsY[i];
        //cout << newY << " "<< newX << " " << room[newY][newX] << endl;
        while( newX >= M || newX < 0 || newY >= N || newY < 0 || room[newY][newX] == 'X')
        {

            //cout << newY << " "<< newX << " " << room[newY][newX] << endl;
            if( i < 3) i++;
            else i = 0;
            newX = x + movementsX[i];
            newY = y + movementsY[i];
        }
        if( visited[newY][newX] == 1 ) {
            //cout << newY << " " << newX<<" " << "visited" << endl;
            return ;
        }
        visited[newY][newX] = 1;
        steps++;
        //cout << "steps: " << steps << endl;
        dfs(newX, newY, i);
    }
}

int solution(vector<string> &R) {
    string s = R.back();
    N = R.size();
    M = s.length();

    vector<string>::iterator itr;
    int i = 0, j = 0;

    for(itr = R.begin(); itr<R.end(); itr++)
    {
        string temp = *itr;
        for( j=0; j<M; j++)
        {
            room[i][j] = temp[j];
        }
        i++;
    }
    dfs(0, 0, 0);
    return steps;
}

int main()
{
    vector<string> xx;
    xx.push_back("...XX..");
    xx.push_back(".X.....");
    xx.push_back("X......");
    xx.push_back("X......");
    solution(xx);
    cout << "steps: " << steps << endl;
}

