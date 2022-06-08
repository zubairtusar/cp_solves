#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, zeros = 0, fives = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x == 0) zeros++;
        if(x == 5) fives++;
    }
    for(int i=fives; i>0; i--){
        fives = i;
        if ( fives!=0 && (fives*5)%9 == 0 && zeros>0)
        {
            while(fives--)
            {
                cout << 5  ;
            }
            while(zeros--)
            {
                cout << 0  ;
            }
            return 0;
        }
    }
    if(zeros > 0)
        cout << 0 ;
    else
        cout << -1 << endl ;
}
