#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    ll n, x;
    ll arr[8] = {0};
    cin >> n;
    while(n--)
    {
        cin >> x;
        arr[x]++;
    }
    if(arr[5] == 0 && arr[7] == 0 && arr[2] >= arr[4] && arr[1] == arr[4] + arr[6] && arr[2] + arr[3] == arr[4] + arr[6])
    {
        while(arr[3]!=0)
        {
            cout << "1 3 6" << endl ;
            arr[3]--;
            arr[6]--;
        }
        while(arr[4]!=0)
        {
            cout << "1 2 4" << endl ;
            arr[4]--;
            arr[2]--;
        }
        while(arr[6]!=0)
        {
            cout << "1 2 6" << endl ;
            arr[2]--;
            arr[6]--;
        }
        return 0;
    }
    cout << "-1" << endl ;
}
