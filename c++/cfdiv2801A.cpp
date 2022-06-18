#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        int n, m, maxi=-1, maxj=-1, maxx=-9999999999;
        cin >> n >> m;

        int mat[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> mat[i][j];
                if(mat[i][j] > maxx)
                {
                    maxx = mat[i][j];
                    maxi = i+1;
                    maxj = j+1;
                }
            }
        }
        //cout << endl << max(maxi, n-maxi+1) << "  " << max(maxj, m-maxj+1) << "  " << max(maxi, n-maxi+1)*max(maxj, m-maxj+1) << endl << endl;
        cout << max(maxi, n-maxi+1)*max(maxj, m-maxj+1) << endl;
    }
}
