#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        long long int n;
        long long int pos_sum = 0, neg_sum = 0, min_diff = 999999999, index = 0;
        cin >> n;
        long long int arr[n];
        for(long long int i=0; i<n; i++)
        {
            long long int x;
            cin >> x;
            arr[i] = x;
            pos_sum = pos_sum + x;
        }
        for(long long int i=0; i<n; i++)
        {
            neg_sum = neg_sum + arr[i];
            pos_sum = pos_sum - arr[i];
            if(abs(pos_sum - neg_sum) < min_diff)
            {
                min_diff = abs(pos_sum - neg_sum);
                index = i;
            }
        }
        cout << index+1 << " is the result!" << endl;
    }
}
