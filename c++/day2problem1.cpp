// you can use includes, for example:
// #include <algorithm>
#include<bits/stdc++.h>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {

    int sum = 0, result = 0;
    for( int i=0; i<S.length(); i++)
    {
        sum = sum + S[i] - '0';
    }

    cout << sum << " " << result << endl;
    if(sum%3 == 0) result++;
    for( int i=0; i<S.length(); i++)
    {
        int curr_sum;
        for( int j=0; j<=9; j++)
        {
            if( j == S[i]-'0') continue;

            curr_sum = sum - S[i] - '0';

            if((curr_sum+j)%3 == 0) result++;
            cout << sum << " " << result << endl;
        }
    }

    return result;

}
int main()
{
    string s = "222";
    cout << solution(s);
}
