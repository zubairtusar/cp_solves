#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        long long int n;
        cin >> n;

        if(n%3 == 0)
        {
            cout << n/3 << " " << (n/3)+1 << " " << (n/3)-1 << endl;
        }
        else if(n%3 == 1)
        {
            int y;
            float x = n/3;
            if(x-(int)x > 0.5)
                y = (int)x -1;
            else y = (int)x;
            cout << y << " " << y +2 << " " << y -1 << endl;
        }
        else if(n%3 == 2)
        {
            int y;
            float x = n/3;
            if(x-(int)x > 0.5)
                y = (int)x -1;
            else y = (int)x;
            cout << y+1 << " " << y+2 << " " << y-1 << endl;
        }
    }
}
