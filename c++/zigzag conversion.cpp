#include<bits/stdc++.h>
using namespace std;

void solution(string s, int numRows)
{
    for(int i=0; i<numRows; i++)
    {
        int jump = (numRows - i) - 2;
        cout << jump << endl;
        //for(int j=0; j<s.length(); j=j+jump)
        //{
        //    cout << s[j];
        //}
    }
}

int main()
{
    string s = "PAYPALISHIRING";
    solution(s, 3);
}
