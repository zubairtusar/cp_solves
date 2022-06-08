#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        int temp_idx, last_idx = -1;
        int result = 100000000, c_res = 0;
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        for(int i=0; i<n; ++i)
        {
            bool flag = false;
            cout << "Start i: " << i << " " << result << endl;
            for(int idx=i; idx<i+k && idx<n; idx++)
            {
                if(str[idx] == 'W')
                {
                    cout << "Here idx: " << idx << " " << "last_idx: " << last_idx << endl;
                    if(last_idx<idx)
                    {
                        last_idx = idx;
                        cout << "last: " << last_idx << endl;
                        flag = true;
                    }
                    c_res++;
                }
            }
            if(true)
                i = last_idx;
            if(c_res < result)
                result = c_res;

            if(result == 0)
                break;

            c_res = 1;
            cout << "End i: " << i << "last_idx: " << last_idx << endl;
        }
        cout << "Res: " << result << endl;
    }
}

