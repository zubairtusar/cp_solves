#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int c;
    cin >> c;
    if (c < 4 && c != 1)
    {
        cout << "NO SOLUTION";
    }
    else if (c == 4)
    {
        cout << "2 4 1 3";
    }
    else if (c == 1)
    {
        cout << 1;
    }
    else
    {
        for(int i=c; i>=1; i=i-2)
        {
            cout << i << " ";
        }
        for(int i=c-1; i>=1; i=i-2)
        {
            cout << i << " ";
        }
    }
}
