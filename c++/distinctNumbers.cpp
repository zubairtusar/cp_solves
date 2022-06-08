#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main()
{
    ll n, x;
    set<ll> set1;

    cin >> n;
    while(n--)
    {
        cin >> x;
        set1.insert(x);
    }
    cout << set1.size() << endl;
}
