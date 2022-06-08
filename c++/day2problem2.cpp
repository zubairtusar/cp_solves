// you can use includes, for example:
// #include <algorithm>
#include<bits/stdc++.h>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

bool check_if_line(const pair<int, int> &a, const pair<int, int> &b, const pair<int, int> &c)
{
    int result = a.first*(b.second - c.second) + b.first*(c.second - a.second) + c.first*(a.second - b.second);
    if(result==0)
        return true;
    else
        return false;
}

bool sort_pairs(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.first == b.first) return a.second<b.second;
    else return a.first<b.first;
}

vector<int> solution(vector<int> &X, vector<int> &Y) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int>::iterator itr1;
    vector<int>::iterator itr2;

    if(X.size() < 3)
    {
        vector<int> newvec{};
        return newvec;
    }

    vector<pair<int, int>> points;
    map<pair<int, int>, int> index_map;
    int i = 0;

    itr1 = X.begin();
    itr2 = Y.begin();

    while(itr1 != X.end() && itr2 != Y.end())
    {
        points.push_back(pair<int, int>(*itr1, *itr2));
        index_map[{ *itr1, *itr2 }] = i;
        itr1++;
        itr2++;
        i++;
    }
    sort(points.begin(), points.end(), sort_pairs);

    vector<pair<int, int>> result_points{};
    vector<int> result{};

    vector<pair<int, int>>::iterator itr;
    itr = points.begin();
    result_points.push_back(*itr);
    pair<int, int> p1 = *itr;
    itr++;
    result_points.push_back(*itr);
    pair<int, int> p2 = *itr;
    itr++;


    while(itr != points.end())
    {
        pair<int, int> p3 = *itr;
        bool line = check_if_line( p1, p2, p3);
        if(!line)
        {
            result_points.push_back(*itr);
            break;
        }
        itr++;
    }

    if(result_points.size() != 3)
    {
        vector<int> newvec{};
        return newvec;
    }
    else if(result_points.size() == 3)
    {
        vector<int> newvec{};
        for(itr=result_points.begin(); itr!=result_points.end(); itr++)
        {
            newvec.push_back(index_map[*itr]);
        }
        return newvec;
    }
}

int main()
{
    vector<int> vec1{ 1, 1, 1, 1, 1};
    vector<int> vec2{ 0, 0, 0, 5, 0};
    vector<int> res = solution(vec1, vec2);
    vector<int>::iterator i;
    cout << res.size();
    for(i=res.begin(); i<res.end(); i++)
    {
        cout << *i << " ";
    }
}
