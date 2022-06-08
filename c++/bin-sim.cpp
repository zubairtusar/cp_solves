#include <bits/stdc++.h>
#define ll long long int

using namespace std;

struct NODE
{
    ll pop,sum;
}node[400005];

char arr[100005];
int cc=0;

void init(ll n,ll i,ll j)
{

    if(i==j)
    {
        node[n].sum=arr[i-1]-48;
        node[n].pop=0;
        return;
    }
    ll mid=(i+j)/2;
    init(2*n,i,mid);
    init(2*n+1,mid+1,j);
    //node[n].sum=node[2*n].sum+node[2*n+1].sum;
    node[n].pop=0;
}

void update(ll n,ll i,ll j,ll s,ll e)
{
    if(j<s || i>e)
        return;
    if(i>=s && j<=e)
    {

        node[n].pop++;
        //cout<<i<<"---"<<j<<" : "<<node[n].pop<<endl;
        return;
    }
    ll mid=(i+j)/2;
    update(2*n,i,mid,s,e);
    update(2*n+1,mid+1,j,s,e);
}

ll query(ll n,ll i,ll j,ll s,ll e,ll carr=0)
{

    if(i>e || j<s)
        return 0;
    if(i>=s && j<=e)
    {
        //cout<<i<<"---"<<j<<" : "<<(node[n].pop+carr)<<endl;
        return ((node[n].pop+carr)%2+node[n].sum)%2;
    }
    ll mid,l,r;
    mid=(i+j)/2;
    l=query(2*n,i,mid,s,e,carr+node[n].pop);
    r=query(2*n+1,mid+1,j,s,e,carr+node[n].pop);
    return l+r;
}

int main() {
    ll i,j,k,l,m,n,s,e,v,key,x,t,c=1;
    cin>>t;
    while(c<=t)
    {
        printf("Case %lld:\n",c++);
        scanf("%s",arr);
        scanf("%lld",&m);

        n=strlen(arr);
        init(1,1,n);
        char ch;
        while(m--)
        {
            getchar();
            scanf("%c",&ch);
            if(ch=='I')
            {
                scanf("%lld %lld",&s,&e);
                update(1,1,n,s,e);
            }
            else
            {
                scanf("%lld",&s);
                printf("%lld\n",query(1,1,n,s,s));
            }
        }
    }
    return 0;
}
