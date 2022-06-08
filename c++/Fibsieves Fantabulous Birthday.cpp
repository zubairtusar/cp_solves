#include<math.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    for(int tc=1; tc<=testcases; tc++)
    {
        long long int value;
        cin >> value;
        if(value == 1)
        {
            cout << "Case " << tc << ": 1 1" << endl;
        }
        else
        {
            long long int x = ceil(sqrt(value));
            //cout << "x : " << x << endl;
            long long int y = x*x;
            long long int r, c;
            if(x%2==0)
            {
                r = x;
                c = 1;
                if(y==value)
                {
                    cout << "Case " << tc << ": " << r << " " << c <<endl;
                }
                else if(y-value+1>x)
                {
                    cout << "Case " << tc << ": " << r-((y-value+1)-x) << " " << r <<endl;
                }
                else if(y-value+1<x)
                {
                    cout << "Case " << tc << ": " << r << " " << c+(y-value) <<endl;
                }
                else if((y-value+1==x))
                {
                    cout << "Case " << tc << ": " << r << " " << r <<endl;
                }
            }
            else if(x%2!=0)
            {
                r = 1;
                c = x;
                if(y==value)
                {
                    cout << "Case " << tc << ": " << r << " " << c <<endl;
                }
                else if(y-value+1>x)
                {
                    cout << "Case " << tc << ": " << c << " " << c-((y-value+1)-x) <<endl;
                }
                else if(y-value+1<x)
                {
                    cout << "Case " << tc << ": " << r+(y-value) << " " << c <<endl;
                }
                else if((y-value+1==x))
                {
                    cout << "Case " << tc << ": " << c << " " << c <<endl;
                }
            }
            //cout << "Case " << tc << ": " << r << " " << c <<endl;
        }
    }
}
