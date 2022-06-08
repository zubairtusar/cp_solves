#include<bits/stdc++.h>
using namespace std;
int main()
{
    string in;
    cin >> in;
    long long int curr=1, maxx=0;
    for(int i=1; i<in.length(); i++)
    {
        if(curr > maxx)
        {
            maxx = curr;
        }
        if(in[i] == in[i-1])
        {
            curr++;
        }
        else
        {
            curr = 1;
        }
    }
    if(curr > maxx)
    {
        maxx = curr;
    }
    cout << maxx;
}
