#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mapp;
    map<int, int> mappi;
    map<int, int>::iterator itr;
    map<int, int>::iterator itr2;
    for(int i=0; i<n; i++)
    {
        int x; cin >> x;
        mapp.insert(pair<int, int>(x, m-x));
        mappi.insert(pair<int, int>(x, i+1));
    }
    int i = 0;
    for( itr=mapp.begin(); itr!=mapp.end(); itr++ )
    {

        if(mapp.find(itr->second) != mapp.end())
        {
            cout << mappi[itr->first] << " " << mappi[itr->second];
            return 0;
        }
    }
    cout << "IMPOSSIBLE" ;
    return 0;
}
