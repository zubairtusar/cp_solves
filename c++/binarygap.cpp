#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        long long int n;
        cin >> n;
        long long int maxx=0, cnt=0;
        bool flag = false;
        while(n!=0)
        {
            if(n%2 == 1)
            {
                flag = true;
                if(maxx < cnt)
                    maxx = cnt;
                    cnt = 0;
            }
            else if(n%2 == 0 && flag)
            {
                cnt++;
            }
            cout << n%2 << " " << cnt << " " << maxx << endl;
            n = n/2;
        }
        cout << maxx << endl;
    }
}
