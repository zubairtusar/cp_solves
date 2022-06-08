#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        int last_f = 0;
        int n;
        cin >> n;
        int s[n], f[n];

        for(int i=0; i<n; i++)
        {
            cin >> s[i];
        }

        for(int i=0; i<n; i++)
        {
            cin >> f[i];
        }

        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                cout << f[i] - s[i] << " ";
                last_f = f[i];
            }
            else
            {
                if(s[i]>=last_f)
                {
                    cout << f[i] - s[i] << " ";
                    last_f = f[i];
                }
                else
                {
                    cout << f[i] - last_f << " ";
                    last_f = f[i];
                }
            }
        }
        cout << endl ;
    }
}
