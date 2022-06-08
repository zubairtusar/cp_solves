#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        bool found = false;
        int maxx = -1, c_maxx = 0;
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        for(int i=0; i<n; i++)
        {
            if(str[i] == 'B')
            {
                c_maxx ++;
            }
            else
            {
                c_maxx = 0;
            }

            if(c_maxx > maxx)
            {
                maxx = c_maxx;
            }

            if(maxx >= k)
            {
                cout << 0 << endl;
                found = true;
                break;
            }
        }

        if(!found)
            cout << k - maxx << endl;
    }
}


