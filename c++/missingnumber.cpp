#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, sum = 0, sum_true;
    cin >> n;
    sum_true = (n*(n+1))/2;
    for(int i=1; i<n; i++)
    {
        long long int x;
        cin >> x;
        sum = sum+x;
    }
    cout << sum_true-sum;
}
