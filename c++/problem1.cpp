#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "bbbaaabbbaaabbbaaabbbaaaaaaaaabbbbbbbbbaaaaaaaaa";
    cout << s.length() << endl;
    long long int acount = 0, bcount = 0, result = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'a'){
            acount++;
            bcount = 0;
        }
        else if(s[i] == 'b'){
            bcount++;
            acount = 0;
        }

        if(acount == 3)
        {
            result++;
            acount = 0;
        }
        if(bcount == 3)
        {
            result++;
            bcount = 0;
        }
    }
    cout << result;
}
