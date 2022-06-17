#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    while(testcases--)
    {
        int N;
        cin >> N;

        bool ANS=true;
        int temp, moves=0;
        for(int i=0; i<N; i++)
        {
            cin >> temp;
            if(i!=0 && ((moves==0 && temp!=0)) || moves+temp<0)
            {
                ANS = false;
            }
            moves += temp;
        }
        if(ANS && moves==0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}
