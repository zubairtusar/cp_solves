#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        map<long long int, long long int> mapped;
        map<long long int, long long int>::iterator itr;
        long long int n;
        cin >> n;
        while(n--)
        {
            long long int x;
            cin >> x;
            if(mapped.find(x) != mapped.end())
            {
                itr = mapped.find(x);
                itr->second = itr->second + 1;
                cout << itr->first << "  " << itr->second << endl;
            }
            else if(mapped.find(x) == mapped.end())
            {
                mapped.insert(pair<long long int, long long int>(x, 1));
                itr = mapped.find(x);
                cout << itr->first << "  " << itr->second << endl;
            }
        }
        for( itr = mapped.begin(); itr!=mapped.end(); itr++)
        {
            if(itr->second%2 != 0)
            {
                cout << itr->first << " is the result!" << endl;
            }
        }
    }
}
