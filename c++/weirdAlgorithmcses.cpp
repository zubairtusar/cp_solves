#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int c;
    cin >> c;
    while(c!=1)
    {
        cout << c << " ";
        if(c%2==0)
            c = c/2;
        else
            c = c*3 + 1;
    }
    cout << c << " ";
}
