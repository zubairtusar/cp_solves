#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll testcase;
    cin >> testcase;
    while(testcase--)
    {
        ll n, l, r, x, ans = 0;
        cin >> n >> l >> r;
        ll arr[n];
        for(ll i=0; i<n; i++)
        {
            cin >> x;
            arr[i] = x;
            if(i!=0 && arr[0]+arr[i]>=l && arr[0]+arr[i]<=r)
            {
                ans++;
            }
        }
        for(ll i=1; i<n; i++)
        {
            for(ll j=i+1; j<n; j++)
            {
                if(arr[i]+arr[j]>=l && arr[i]+arr[j]<=r)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
