#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> vec;
    vector<pair<int, int>>::iterator itr;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        vec.push_back(pair<int, int>( x, 1));
        vec.push_back(pair<int, int>( y, -1));
    }
    sort(vec.begin(), vec.end());
    int result = 0, maxx = -999;
    for( itr = vec.begin(); itr<vec.end(); itr++)
    {
        pair<int, int> temp = *itr;
        //cout << temp.first << " " << temp.second << endl;
        result = result + temp.second;
        //cout << "result: " << result << endl;
        if(result > maxx)
            maxx= result;
    }
    cout << maxx ;
}
