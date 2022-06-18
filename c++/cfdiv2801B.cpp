#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while(testcases--)
    {
        long long int piles, minn = 9999999999, mini = -1;
        cin >> piles;
        int arr[piles];
        for(int i=0; i<piles; i++)
        {
            cin >> arr[i];

            if(piles%2==0)
            {
                if(arr[i] < minn)
                {
                    minn=arr[i];
                    mini=i;
                }
            }
        }
        if(piles%2!=0)
        {
            cout << "Mike" << endl;
        }
        else
        {
            if(mini%2==0)
            {
                cout << "Joe" << endl;
            }
            else
            {
                cout << "Mike" << endl;
            }
        }
    }
}
