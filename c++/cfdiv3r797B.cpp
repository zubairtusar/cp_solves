#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        bool flag = true;
        int n, diff = 1000000000;
        cin >> n;
        int a[n], b[n], d[n];

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            //cout << "Chekcing " << a[i] << endl;
        }

        for(int i=0; i<n; i++)
        {
            cin >> b[i];
            //cout << "Chekcing " << b[i] << endl;
            d[i] = a[i] - b[i];
            if(a[i]>=b[i] && b[i]!=0 && d[i]>=0 && d[i] < diff)
                diff = d[i];

        }
        //cout << diff << " : Diff" << endl;
        for(int i=0; i<n; i++)
        {
            if(diff==1000000000)
            {
                if (d[i] < 0)
                {
                    flag = false;
                    //cout << i << " :1: " << d[i] << endl;
                }
            }
            else if(d[i] > diff || d[i] < 0)
            {
                flag = false;
                //cout << i << " :2: " << d[i] << endl;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
