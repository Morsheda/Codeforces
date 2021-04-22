#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll m=1000000007;

ll bigmod(ll a,ll b){
    if(b==0)
        return 1%m;
    ll x=bigmod(a,b/2);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;//x=(a^b)%m
}

ll fact(ll n,ll k){
    ll res=1%m;
    for(ll i=0;i<k;i++){
        res=((res%m)*(n%m))%m;
    }
    return res;
}

int main()
{
    ll t,n,k,i,j,ans,mn;
   
    cin>>t;
    while(t--){
        cin>>n>>k;
        ans=fact(n,k);
        printf("%I64d\n",ans);
    }
    return 0;
}