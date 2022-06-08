#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x, seat;
    cin >> n;

    vector<int> rows_0;
    vector<int> rows_1;
    map<int, int> mapp;
    map<int, int>::iterator itr;
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        rows_0.push_back(x);
        mapp.insert(pair<int, int>(x, i));
    }
    sort(rows_0.begin(), rows_0.end(), greater<int>());
    string seq;
    cin >> seq;
    for(int i=0; i<seq.length(); i++)
    {
        if(seq[i] == '0')
        {
            seat = rows_0.back();
            rows_0.pop_back();
            rows_1.push_back(seat);
            itr = mapp.find(seat);
            cout << itr->second << " " ;
        }
        else if(seq[i] == '1')
        {
            seat = rows_1.back();
            rows_1.pop_back();
            itr = mapp.find(seat);
            cout << itr->second << " " ;
        }
    }
}
