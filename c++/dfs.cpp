#include<bits/stdc++.h>
#define SIZE 1001
using namespace std;

bool flag;
int n, m;
int G[SIZE][SIZE];//n is no of vertices and graph is sorted in array G[10][10]

void DFS(int i, int j, int sum)
{
    if(i>=n || j>=m || i<0 || j<0 || flag)
    {
        //cout << "returning" << endl;
        return;
    }

    //cout << "i: " << i+1 << " j: " << j+1 << " sum: " << sum+G[i][j] << " " << G[i][j] << endl;

    if(i==n-1 && j==m-1 && sum+G[i][j]==0)
    {
        flag=true;
    }

    if(!flag)
    {
        DFS(i+1, j, sum+G[i][j]);
        DFS(i, j+1, sum+G[i][j]);
    }
}

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        flag = false;
        cin >> n >> m;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                 cin >> G[i][j];
            }
        }

        DFS(0, 0, 0);

        if(flag)
            cout << "YES" << endl;
        else
            cout << "No" << endl;
    }
}
