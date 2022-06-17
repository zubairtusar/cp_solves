#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    while(testcases--)
    {
        int a, b;
        cin >> a >> b;

        int tot = a+b;
        if(b>=a)
        {

            for(int i=0; i<tot; i++)
            {
                if(i%2==1 and a)
                {
                    cout << 0;
                    a = a-1;
                }
                else
                    cout << 1;
            }
        }
        else
            for(int i=0; i<tot; i++)
            {
                if(i%2==1 and b)
                {
                    cout << 1;
                    b = b-1;
                }
                else
                    cout << 0;
            }
        cout << endl;
    }
}
