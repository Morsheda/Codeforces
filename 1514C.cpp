#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll m=1000000007;

ll power(ll a,ll b){
    if(b==0)return 1;
    ll x=power(a,b/2);
    x=x*x;
    if(b%2)x=x*a;
    return x;//x=a^b
}

ll bigmod(ll a,ll b){
    if(b==0)
        return 1%m;
    ll x=bigmod(a,b/2);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;//x=(a^b)%m
}

ll factorial(ll n){
    ll res=1%m;
    while(n>0){
        res=((res%m)*(n%m))%m;
        n--;
    }
    return res;
}

ll arr[100005];

int main()
{
    ll n,i,gc,c,p;
    cin>>n;
    ll vis[n+5];
    memset(vis,0,sizeof(vis));
    c=n-1;
    for(i=1;i<n;i++){
        gc=__gcd(n,i);
        if(gc!=1){
            vis[i]=1;
            c--;
        }
    }
    
    p=1;
    for(i=1;i<n;i++){
        if(!vis[i]){
            p=(p*i)%n;
        }
    }
    if(p!=1){
        c--;
        vis[p]=1;
    }
    cout<<c<<endl;
    for(i=1;i<n;i++){
        if(!vis[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}