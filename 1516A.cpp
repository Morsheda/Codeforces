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

int main()
{
    ll t,n,k,kk,d,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        kk=k;
        ll a[n+5];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n-1;i++){
            if(kk>0){
                if(a[i]-kk<0){
                    kk-=a[i];
                    a[i]=0;
                }
                else{
                    a[i]-=kk;
                    kk=0;
                }
            }
        }
        //cout<<kk<<endl;
        a[n-1]+=(k-kk);
        for(i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        printf("\n");
    }
    return 0;
}