#include<bits/stdc++.h>
using namespace std;

vector<string> get_result(int *arr, int sze)
{   vector<string> lst;

    for( int i=0; i<sze; i++)
    {
        string str = "....";
        str[arr[i-1]] = 'Q';
        lst.push_back(str);
    }
    return lst;
}

int main()
{
    int testcases;
    cin >> testcases;
    for( int tc=1; tc<=testcases; tc++)
    {
        int n;
        cin >> n;


        int result[n] = get_valid_states;

        //get and print result
        vector<string> lst = get_result(arr, sizeof(arr)/sizeof(arr[0]));

        vector<string>::iterator it;
        for(it = lst.begin(); it != lst.end(); it++)
        {
            cout<< *it << endl;
        }
    }
    return 0;
}
