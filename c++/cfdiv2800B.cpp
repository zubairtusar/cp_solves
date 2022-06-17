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

        string S;
        cin >> S;

        int ANS = N;
        bool flag0=false, flag1=false;

        for(int i=0; i<N-1; i++)
        {
            if(S[i]=='0' && S[i+1]=='1'){
                ANS++;
                if(flag1)
                {
                    ANS++;
                    flag1 = true;
                }
                else
                    flag0 = true;
            }
            else if(S[i]=='1' && S[i+1]=='0'){
                ANS++;
                if(flag0)
                {
                    ANS++;
                    flag0 = true;
                }
                else
                    flag1 = true;
            }
            else if (S[i]=='0')
            {
                if(flag1)
                {
                    ANS++;
                    flag1 = true;
                }
            }
            else if (S[i]=='1')
            {
                if(flag0)
                {
                    ANS++;
                    flag0 = true;
                }
            }
        }
        cout << ANS << endl;
    }
}
