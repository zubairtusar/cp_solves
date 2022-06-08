#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int testcases;
    cin >> testcases;
    for(int tc=1; tc<=testcases; tc++)
    {
        bool white = false, black = false;
        long long int r1, r2, c1, c2;
        scanf("%lld %lld %lld %lld",&r1,&c1,&r2,&c2);

        long long int rdiff = r2-r1;
        long long int cdiff = c2-c1;

        if( r1%2 == c1%2 )
            white = true;
        else
            black = true;

        if( r2%2 == c2%2 )
            white = true;
        else
            black = true;

        if(white && black)
        {
            cout << "Case " << tc << ": impossible" << endl;
        }
        else if(rdiff==cdiff || rdiff==(cdiff*-1))
        {
            cout << "Case " << tc << ": 1" << endl;
        }
        else
        {
            cout << "Case " << tc << ": 2" << endl;
        }
    }
}
